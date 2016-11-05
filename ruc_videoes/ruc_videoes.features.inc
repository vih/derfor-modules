<?php
/**
 * @file
 * ruc_videoes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ruc_videoes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ruc_videoes_flag_default_flags() {
  $flags = array();
  // Exported flag: "Video Like".
  $flags['videolike'] = array(
    'content_type' => 'node',
    'title' => 'Video Like',
    'global' => 0,
    'types' => array(
      0 => 'ruc_video',
    ),
    'flag_short' => 'Synes godt om',
    'flag_long' => '',
    'flag_message' => 'Du synes godt om',
    'unflag_short' => 'Fjern synes godt om',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 3,
      ),
      'unflag' => array(
        0 => 2,
        1 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ruc_videoes',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function ruc_videoes_node_info() {
  $items = array(
    'ruc_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Videoer som vises på videosiden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
