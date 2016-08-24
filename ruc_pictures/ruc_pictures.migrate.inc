<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class RUCPictureNode extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import RUC Pictures.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ruc_pictures') . '/import/pictures.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('billede');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    // Featured image
    $this->addFieldMapping('field_picture', 'picture');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'ruc_pictures') . '/import/images');

    $this->addFieldMapping('field_picture_thumb', 'picture');
    $this->addFieldMapping('field_picture_thumb:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture_thumb:source_dir')
      ->defaultValue(drupal_get_path('module', 'ruc_pictures') . '/import/images');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Name');
    $columns[2] = array('picture', 'Picture');
    return $columns;
  }
}
