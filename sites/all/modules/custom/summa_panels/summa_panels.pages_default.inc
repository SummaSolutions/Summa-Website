<?php
/**
* Implementation of hook_default_page_manager_pages().
*/
function summa_panels_default_page_manager_pages() {
  $path = drupal_get_path('module', 'summa_panels') . '/pages/';
  return process_includes($path, "page");
}

function summa_panels_default_page_manager_handlers() {
  $path = drupal_get_path('module', 'summa_panels') . '/handlers/';
  return process_includes($path, "handler");
}

function process_includes($path, $name) {
  $items = array();
  $files = glob($path."*.inc");
  foreach($files as $file) {
    include_once $file;
    $items[$$name->name] = $$name;
   }
  return $items;
}