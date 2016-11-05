<?php
/**
 * @file
 * ruc_videoes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ruc_videoes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ruc_video-field_ruc_video_link'.
  $field_instances['node-ruc_video-field_ruc_video_link'] = array(
    'bundle' => 'ruc_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link til videoer på enten Youtube eller Ructube.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'ruc_videoes',
        'settings' => array(),
        'type' => 'ruc_videoes_video',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ruc_video_link',
    'label' => 'Video link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'none',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-ruc_video-field_ruc_video_thumb'.
  $field_instances['node-ruc_video-field_ruc_video_thumb'] = array(
    'bundle' => 'ruc_video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ruc_video_thumb',
    'label' => 'Video thumbnail',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'videothumbs',
      'file_extensions' => 'jpg jpeg png',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link til videoer på enten Youtube eller Ructube.');
  t('Video link');
  t('Video thumbnail');

  return $field_instances;
}
