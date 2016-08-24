<?php
/**
 * @file
 * ruc_pictures.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ruc_pictures_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ruc_pictures_node_info() {
  $items = array(
    'billede' => array(
      'name' => t('Billede'),
      'base' => 'node_content',
      'description' => t('Bruges til et lille billedgalleri.'),
      'has_title' => '1',
      'title_label' => t('Billedenavn'),
      'help' => '',
    ),
  );
  return $items;
}
