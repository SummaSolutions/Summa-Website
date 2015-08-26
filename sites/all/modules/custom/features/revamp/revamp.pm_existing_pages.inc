<?php
/**
 * @file
 * revamp.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function revamp_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'comment';
  $pm_existing_page->label = 'Comments pages';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'comment/%
comment/%/approve
comment/%/delete
comment/%comment/edit
comment/%/view
comment/reply/%node';
  $export['comment'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'contact_page';
  $pm_existing_page->label = 'Contact page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'contact';
  $export['contact_page'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'team_interna_';
  $pm_existing_page->label = 'Team (Interna)';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'team/%';
  $export['team_interna_'] = $pm_existing_page;

  return $export;
}
