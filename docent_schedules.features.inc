<?php
/**
 * @file
 * docent_schedules.features.inc
 */

/**
 * Implements hook_node_info().
 */
function docent_schedules_node_info() {
  $items = array(
    'tour' => array(
      'name' => t('Tour'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
