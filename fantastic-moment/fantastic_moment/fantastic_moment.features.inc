<?php
/**
 * @file
 * fantastic_moment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fantastic_moment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fantastic_moment_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function fantastic_moment_node_info() {
  $items = array(
    'moment' => array(
      'name' => t('精彩瞬间'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('精彩瞬间'),
      'help' => '',
    ),
  );
  return $items;
}
