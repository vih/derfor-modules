<?php
/**
 * @file
 * ruc_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ruc_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => t('En statistisk side'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
