<?php
/**
 * @file
 * stanford_fellowship.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_fellowship_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_fellowship|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_fellowship';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_s_fellowship_external',
        3 => 'field_s_fellowship_related_links',
        9 => 'field_s_fellowship_organization',
        10 => 'field_s_fellowship_duration',
        11 => 'field_s_fellowship_contact_info',
        12 => 'field_s_fellowship_amount_award',
        13 => 'field_s_fellowship_number_award',
      ),
      'eligibility' => array(
        2 => 'field_s_fellowship_open_to',
        4 => 'field_s_fellowship_requirements',
        7 => 'field_s_fellowship_eligibility',
        8 => 'field_s_fellowship_selection',
      ),
      'application' => array(
        5 => 'field_s_fellowship_applic_proces',
        6 => 'field_s_fellowship_applic_mater',
      ),
      'fellowship_important_dates' => array(
        14 => 'field_s_fellowship_campus_applic',
        15 => 'field_s_fellowship_deadline_peri',
        16 => 'field_s_fellowship_campus_interv',
        17 => 'field_s_fellowship_info_session',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_s_fellowship_external' => 'ds_content',
      'field_s_fellowship_open_to' => 'eligibility',
      'field_s_fellowship_related_links' => 'ds_content',
      'field_s_fellowship_requirements' => 'eligibility',
      'field_s_fellowship_applic_proces' => 'application',
      'field_s_fellowship_applic_mater' => 'application',
      'field_s_fellowship_eligibility' => 'eligibility',
      'field_s_fellowship_selection' => 'eligibility',
      'field_s_fellowship_organization' => 'ds_content',
      'field_s_fellowship_duration' => 'ds_content',
      'field_s_fellowship_contact_info' => 'ds_content',
      'field_s_fellowship_amount_award' => 'ds_content',
      'field_s_fellowship_number_award' => 'ds_content',
      'field_s_fellowship_campus_applic' => 'fellowship_important_dates',
      'field_s_fellowship_deadline_peri' => 'fellowship_important_dates',
      'field_s_fellowship_campus_interv' => 'fellowship_important_dates',
      'field_s_fellowship_info_session' => 'fellowship_important_dates',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_fellowship|full'] = $ds_layout;

  return $export;
}
