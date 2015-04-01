<?php
/**
 * @file
 * revamp.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function revamp_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-summa-options.
  $menus['menu-summa-options'] = array(
    'menu_name' => 'menu-summa-options',
    'title' => 'Summa options',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Summa options');


  return $menus;
}
