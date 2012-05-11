<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function asc_research_resources_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function asc_research_resources_node_info() {
  $items = array(
    'qs_research' => array(
      'name' => t('Research'),
      'module' => 'features',
      'description' => t('Information on Research Resource such as an Article or Research Group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function asc_research_resources_views_api() {
  return array(
    'api' => '2',
  );
}
