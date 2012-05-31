<?php
/**
 * @file
 * ruc_answers.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ruc_answers_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ruc_answers_flag_default_flags() {
  $flags = array();
  // Exported flag: "Jeg er enig".
  $flags['answeragree'] = array(
    'content_type' => 'node',
    'title' => 'Jeg er enig',
    'global' => '0',
    'types' => array(
      0 => 'answer',
    ),
    'flag_short' => 'Enig',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Fjern "Enig"',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Ok',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'ruc_answers',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implements hook_node_info().
 */
function ruc_answers_node_info() {
  $items = array(
    'answer' => array(
      'name' => t('Svar'),
      'base' => 'node_content',
      'description' => t('Et svar på et spørgsmål'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Spørgsmål'),
      'base' => 'node_content',
      'description' => t('Et spørgsmål der stilles på siden'),
      'has_title' => '1',
      'title_label' => t('Spørgsmålbeskrivelse (f.eks. Uge 1)'),
      'help' => '',
    ),
  );
  return $items;
}
