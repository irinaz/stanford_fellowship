<?php
/**
 * @file
 * stanford_fellowship.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_fellowship_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stanford_fellowship';
  $strongarm->value = 0;
  $export['comment_anonymous_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stanford_fellowship';
  $strongarm->value = 1;
  $export['comment_default_mode_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stanford_fellowship';
  $strongarm->value = '50';
  $export['comment_default_per_page_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stanford_fellowship';
  $strongarm->value = 1;
  $export['comment_form_location_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stanford_fellowship';
  $strongarm->value = '1';
  $export['comment_preview_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stanford_fellowship';
  $strongarm->value = '1';
  $export['comment_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stanford_fellowship';
  $strongarm->value = 1;
  $export['comment_subject_field_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_fellowship';
  $strongarm->value = array();
  $export['menu_options_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_fellowship';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_fellowship';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_fellowship';
  $strongarm->value = '1';
  $export['node_preview_stanford_fellowship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_fellowship';
  $strongarm->value = 0;
  $export['node_submitted_stanford_fellowship'] = $strongarm;

  return $export;
}
