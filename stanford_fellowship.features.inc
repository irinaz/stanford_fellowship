<?php
/**
 * @file
 * stanford_fellowship.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_fellowship_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
  return $items;
}
