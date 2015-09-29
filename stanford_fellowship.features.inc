<?php
/**
 * @file
 * stanford_fellowship.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function stanford_fellowship_block_class_features_default_class() {
  return array(
    'ds_extras:fellowship_important_dates' => array(
      'module' => 'ds_extras',
      'delta' => 'fellowship_important_dates',
      'css_classes' => 'pull-right span4  well',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_fellowship_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_fellowship_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_fellowship_node_info() {
  $items = array(
    'stanford_fellowship' => array(
      'name' => t('Stanford Fellowship'),
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
