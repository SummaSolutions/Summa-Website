<?php
/**
 * @file
 * revamp.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function revamp_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'blog';
  $layout->admin_title = 'Blog';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-blog',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0',
        'region_separation' => '0',
        'row_separation' => '0',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'right__mobile_left_',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-main',
      ),
      'right__mobile_left_' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-right',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'row-h1 safe-container',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $export['blog'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'case_studies_internal';
  $layout->admin_title = 'Case Studies - Internal';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-case-studies-internal',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'gray',
        ),
        'parent' => 'main',
        'class' => 'row-light-gray',
      ),
      'gray' => array(
        'type' => 'region',
        'title' => 'Gray',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $export['case_studies_internal'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'case_studies_landing';
  $layout->admin_title = 'Case Studies - Landing';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-case-studies',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['case_studies_landing'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'clone_of_service_layout';
  $layout->admin_title = 'Service (Internal) Layout';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-services',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
          2 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'row-description',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green_',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green_' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['clone_of_service_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'company';
  $layout->admin_title = 'Company';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-company',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 10,
          3 => 11,
          4 => 12,
          5 => 13,
          6 => 14,
          7 => 15,
          8 => 16,
          9 => 17,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'row-description',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-description-container',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left__top_',
          1 => 'right__bottom_',
        ),
        'parent' => 'main',
        'class' => 'row-mission-vision safe-container',
      ),
      'left__top_' => array(
        'type' => 'region',
        'title' => 'Left (top)',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-left',
      ),
      'right__bottom_' => array(
        'type' => 'region',
        'title' => 'Right (bottom)',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'col-right',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'separator',
        ),
        'parent' => 'main',
        'class' => 'row-first-separator',
      ),
      'separator' => array(
        'type' => 'region',
        'title' => 'Separator',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white___',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white___' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'dashed_',
        ),
        'parent' => 'main',
        'class' => 'row-dashed',
      ),
      'dashed_' => array(
        'type' => 'region',
        'title' => 'Dashed',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'separator_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'separator_' => array(
        'type' => 'region',
        'title' => 'Separator',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'row-second-separator',
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white____',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white____' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right__top__',
          1 => 'left__bottom_',
        ),
        'parent' => 'main',
        'class' => 'row-current-openings safe-container',
      ),
      'right__top__' => array(
        'type' => 'region',
        'title' => 'Right (Top)',
        'width' => 50,
        'width_type' => '%',
        'parent' => '15',
        'class' => 'col-right',
      ),
      'left__bottom_' => array(
        'type' => 'region',
        'title' => 'Left (Bottom)',
        'width' => 50,
        'width_type' => '%',
        'parent' => '15',
        'class' => 'col-left',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      17 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'class' => '',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '17',
        'class' => '',
      ),
    ),
  );
  $export['company'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'contact_page';
  $layout->admin_title = 'Contact page';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-contact',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0',
        'region_separation' => '0',
        'row_separation' => '0',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
          2 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'right__mobile_left_',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-main',
      ),
      'right__mobile_left_' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-right',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'gray',
        ),
        'parent' => 'main',
        'class' => 'gray-row',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green_',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green_' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'gray' => array(
        'type' => 'region',
        'title' => 'Gray',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $export['contact_page'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'default_layout';
  $layout->admin_title = 'Default layout';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'safe-container',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['default_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'home_layout';
  $layout->admin_title = 'home_layout';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green',
        ),
        'parent' => 'main',
        'class' => 'green-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'dashed',
        ),
        'parent' => 'main',
        'class' => 'dashed-row',
      ),
      'dashed' => array(
        'type' => 'region',
        'title' => 'Dashed',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'green' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'gray',
        ),
        'parent' => 'main',
        'class' => 'gray-row',
      ),
      'gray' => array(
        'type' => 'region',
        'title' => 'Gray',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'white-row',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_green',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'footer_green' => array(
        'type' => 'region',
        'title' => 'Footer Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['home_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'service_layout';
  $layout->admin_title = 'Services layout';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-services',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 3,
          3 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'row-description',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'dashed',
        ),
        'parent' => 'main',
        'class' => 'dashed-row',
      ),
      'dashed' => array(
        'type' => 'region',
        'title' => 'Dashed',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green_',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green_' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['service_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'team_internal';
  $layout->admin_title = 'team_internal';
  $layout->admin_description = '';
  $layout->category = 'Revamp';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'canvas-team',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0',
        'region_separation' => '0',
        'row_separation' => '0',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'white',
        ),
        'parent' => 'main',
        'class' => 'row-white',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
          1 => 'bottom_left',
        ),
        'parent' => 'main',
        'class' => 'row-top',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Top - Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'region-right',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'green_',
        ),
        'parent' => 'main',
        'class' => 'footer-green-row',
      ),
      'green_' => array(
        'type' => 'region',
        'title' => 'Green',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'white' => array(
        'type' => 'region',
        'title' => 'White',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'safe-container',
      ),
      'bottom_left' => array(
        'type' => 'region',
        'title' => 'Bottom-left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'region-main',
      ),
    ),
  );
  $export['team_internal'] = $layout;

  return $export;
}
