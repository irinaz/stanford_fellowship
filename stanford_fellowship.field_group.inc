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
  $field_group->identifier = 'group_addl_info|node|stanford_fellowship|default';
  $field_group->group_name = 'group_addl_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '40',
    'children' => array(
      0 => 'field_s_fellowship_amount_award',
      1 => 'field_s_fellowship_contact_info',
      2 => 'field_s_fellowship_number_award',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-addl-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_addl_info|node|stanford_fellowship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_application|node|stanford_fellowship|default';
  $field_group->group_name = 'group_application';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Application',
    'weight' => '30',
    'children' => array(
      0 => 'field_s_fellowship_applic_mater',
      1 => 'field_s_fellowship_applic_proces',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Application',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-application field-group-div well',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_application|node|stanford_fellowship|default'] = $field_group;

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
    'weight' => '6',
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
  $field_group->identifier = 'group_eligibility|node|stanford_fellowship|default';
  $field_group->group_name = 'group_eligibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Eligibility',
    'weight' => '20',
    'children' => array(
      0 => 'field_s_fellowship_eligibility',
      1 => 'field_s_fellowship_open_to',
      2 => 'field_s_fellowship_requirements',
      3 => 'field_s_fellowship_selection',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Eligibility',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-eligibility field-group-div  ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_eligibility|node|stanford_fellowship|default'] = $field_group;

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
    'weight' => '5',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_important_dates|node|stanford_fellowship|default';
  $field_group->group_name = 'group_important_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Important Dates',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_fellowship_campus_applic',
      1 => 'field_s_fellowship_deadline_peri',
      2 => 'field_s_fellowship_info_session',
      3 => 'field_s_fellowship_campus_interv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Important Dates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-important-dates field-group-div group_s_postcard_image well',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_important_dates|node|stanford_fellowship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|node|stanford_fellowship|default';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_fellowship_duration',
      1 => 'field_s_fellowship_external',
      2 => 'field_s_fellowship_related_links',
      3 => 'field_s_fellowship_organization',
      4 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|node|stanford_fellowship|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_fellowship|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_fellowship';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '43',
    'children' => array(
      0 => 'group_important_dates',
      1 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-postcard field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_fellowship|default'] = $field_group;

  return $export;
}
