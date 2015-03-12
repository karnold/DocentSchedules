<?php
/**
 * @file
 * docent_schedules.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function docent_schedules_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_contact|node|tour|form';
  $field_group->group_name = 'group_primary_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_contact_phone_',
      2 => 'field_contact_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-primary-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_primary_contact|node|tour|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_contact|node|tour|form';
  $field_group->group_name = 'group_secondary_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Contact',
    'weight' => '7',
    'children' => array(
      0 => 'field_contact_name_2',
      1 => 'field_contact_email_2',
      2 => 'field_contact_phone_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Secondary Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-secondary-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_secondary_contact|node|tour|form'] = $field_group;

  return $export;
}
