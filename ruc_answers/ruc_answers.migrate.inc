<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class RUCQuestionNode extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import RUC Questions.');

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
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ruc_answers') . '/import/questions.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('question');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_question', 'question');
    //$this->addFieldMapping('body:format')
    //  ->defaultValue('panopoly_wysiwyg_text');
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Description');
    $columns[2] = array('question', 'Question');
    return $columns;
  }
}
