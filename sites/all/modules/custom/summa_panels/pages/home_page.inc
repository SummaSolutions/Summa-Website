<?php
$page = new stdClass;
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home_page';
$page->task = 'page';
$page->admin_title = 'Home Page';
$page->admin_description = '';
$page->path = '<front>';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array();
$page->default_handlers = array();
$handler = new stdClass;
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home_page_panel_context';
$handler->task = 'page';
$handler->subtask = 'home_page';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'css_id' => 'frontpage-panel',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display;
$display->layout = 'flexible';
$display->layout_settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 1,
      ),
      'parent' => NULL,
      'class' => '',
      'column_class' => '',
      'row_class' => '',
      'region_class' => '',
      'no_scale' => FALSE,
      'fixed_width' => '',
      'column_separation' => '0.5em',
      'region_separation' => '0.5em',
      'row_separation' => '0.5em',
    ),
    1 => array(
      'type' => 'column',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'canvas',
      'children' => array(
        0 => 13,
        1 => 2,
        2 => 10,
      ),
      'class' => '',
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 4,
        1 => 3,
      ),
      'parent' => '1',
      'class' => '',
    ),
    3 => array(
      'type' => 'column',
      'width' => '11.467719711918928',
      'width_type' => '%',
      'parent' => '2',
      'children' => array(
        0 => 9,
      ),
      'class' => '',
    ),
    4 => array(
      'type' => 'column',
      'width' => '54.55974249782329',
      'width_type' => '%',
      'parent' => '2',
      'children' => array(
        0 => 11,
        1 => 12,
      ),
      'class' => '',
    ),
    9 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'latest_post_in_blog',
      ),
      'parent' => '3',
      'class' => '',
    ),
    'latest_post_in_blog' => array(
      'type' => 'region',
      'title' => 'Latest post in Blog',
      'width' => 100,
      'width_type' => '%',
      'parent' => '9',
      'class' => '',
    ),
    10 => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(),
      'parent' => '1',
      'class' => '',
    ),
    11 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'servicios',
        1 => 'why_summa',
      ),
      'parent' => '4',
      'class' => '',
    ),
    'servicios' => array(
      'type' => 'region',
      'title' => 'Servicios',
      'width' => 50,
      'width_type' => '%',
      'parent' => '11',
      'class' => '',
    ),
    'why_summa' => array(
      'type' => 'region',
      'title' => 'Why Summa',
      'width' => 50,
      'width_type' => '%',
      'parent' => '11',
      'class' => '',
    ),
    12 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'products',
      ),
      'parent' => '4',
      'class' => '',
    ),
    'products' => array(
      'type' => 'region',
      'title' => 'Products',
      'width' => 100,
      'width_type' => '%',
      'parent' => '12',
      'class' => '',
    ),
    13 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'slider',
      ),
      'parent' => '1',
      'class' => '',
    ),
    'slider' => array(
      'type' => 'region',
      'title' => 'Slider',
      'width' => 100,
      'width_type' => '%',
      'parent' => '13',
      'class' => '',
    ),
  ),
);
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
    'services' => NULL,
    'why_summa' => NULL,
    'latest_post_in_blog' => NULL,
    'servicios' => NULL,
    'products' => NULL,
    'slider' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass;
  $pane->pid = 'new-1';
  $pane->panel = 'latest_post_in_blog';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-1'] = $pane;
  $display->panels['latest_post_in_blog'][0] = 'new-1';
  $pane = new stdClass;
  $pane->pid = 'new-2';
  $pane->panel = 'latest_post_in_blog';
  $pane->type = 'views';
  $pane->subtype = 'blog_latest_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Blog',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $display->content['new-2'] = $pane;
  $display->panels['latest_post_in_blog'][1] = 'new-2';
  $pane = new stdClass;
  $pane->pid = 'new-3';
  $pane->panel = 'latest_post_in_blog';
  $pane->type = 'views';
  $pane->subtype = 'hp_jobs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'Careers',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $display->content['new-3'] = $pane;
  $display->panels['latest_post_in_blog'][2] = 'new-3';
  $pane = new stdClass;
  $pane->pid = 'new-4';
  $pane->panel = 'products';
  $pane->type = 'views';
  $pane->subtype = 'case_studies_features';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'Featured',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-4'] = $pane;
  $display->panels['products'][0] = 'new-4';
  $pane = new stdClass;
  $pane->pid = 'new-5';
  $pane->panel = 'servicios';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Services',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-5'] = $pane;
  $display->panels['servicios'][0] = 'new-5';
  $pane = new stdClass;
  $pane->pid = 'new-6';
  $pane->panel = 'slider';
  $pane->type = 'views';
  $pane->subtype = 'hp_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-6'] = $pane;
  $display->panels['slider'][0] = 'new-6';
  $pane = new stdClass;
  $pane->pid = 'new-7';
  $pane->panel = 'why_summa';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Why Summa Solutions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content['new-7'] = $pane;
  $display->panels['why_summa'][0] = 'new-7';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

