<?php
/**
 * @file
 * docent_schedules.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function docent_schedules_taxonomy_default_vocabularies() {
  return array(
    'tour_type' => array(
      'name' => 'Tour Type',
      'machine_name' => 'tour_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
