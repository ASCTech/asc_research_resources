<?php

/**
 * Implementation of hook_strongarm().
 */
function asc_research_resources_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_qs_research';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'menu' => '2',
    'taxonomy' => '-1',
    'path' => '9',
    'custom_breadcrumbs' => '7',
    'xmlsitemap' => '8',
  );
  $export['content_extra_weights_qs_research'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_research';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_qs_research'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_research';
  $strongarm->value = '0';
  $export['upload_qs_research'] = $strongarm;

  return $export;
}
