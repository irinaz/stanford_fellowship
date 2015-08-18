<?php
/**
 * @file
 * stanford_fellowship.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_fellowship_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_application|node|stanford_fellowship|form';
  $field_group->group_name = 'group_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Application',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_fellowship_applic_mater',
      1 => 'field_s_fellowship_applic_proces',
      2 => 'field_s_fellowship_campus_applic',
      3 => 'field_s_fellowship_deadline_peri',
      4 => 'field_s_fellowship_info_session',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-application field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_application|node|stanford_fellowship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eligibility|node|stanford_fellowship|form';
  $field_group->group_name = 'group_eligibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Eligibility',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_fellowship_eligibility',
      1 => 'field_s_fellowship_open_to',
      2 => 'field_s_fellowship_requirements',
      3 => 'field_s_fellowship_selection',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eligibility field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eligibility|node|stanford_fellowship|form'] = $field_group;

  return $export;
}
