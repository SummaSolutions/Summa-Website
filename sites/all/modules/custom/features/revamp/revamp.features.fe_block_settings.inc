<?php
/**
 * @file
 * revamp.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function revamp_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blog-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 2,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -28,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -39,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -41,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-menu-footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-menu-footer',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -36,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-summa-options'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-summa-options',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'summa_revamp',
        'weight' => -46,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 1,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -26,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 2,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['profile-author-information'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'author-information',
    'module' => 'profile',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -25,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -24,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-banner-design'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'banner-design',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -40,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-banner-drupal'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'banner-drupal',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -43,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-banner-magento'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'banner-magento',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -42,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-blog-add-content-button'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'blog-add-content-button',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -22,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-blog-top-posters-code'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'blog-top-posters-code',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -21,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-clients-grid'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'clients-grid',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-contact-form'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact-form',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-contact-maps'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact-maps',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-header-tweets'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'header-tweets',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['summa_blocks-location'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'location',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-services-e-commerce-certified'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'services-e-commerce-certified',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-services-id-quote'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'services-id-quote',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-services-sd-technologies'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'services-sd-technologies',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-sidebar-tweets'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'sidebar-tweets',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -1,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-social-media'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'summa_revamp',
        'weight' => -45,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['summa_blocks-social-media-like'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media-like',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -3,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-social-media-mobile'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media-mobile',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -2,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['summa_blocks-why-us'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'why-us',
    'module' => 'summa_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 36,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -45,
      ),
      'zen' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'summa_revamp',
        'weight' => -45,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -38,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -37,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -35,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -34,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 4,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 3,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 1,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 34,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 1,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 35,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0029cb6efdb9fd1f563f425c8d0521e2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0029cb6efdb9fd1f563f425c8d0521e2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 10,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0d5200c2e5b542634d1d8e9c5d619600'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0d5200c2e5b542634d1d8e9c5d619600',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 13,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-3d8ba566dfedae6b8743e1b9bdc43e7c'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3d8ba566dfedae6b8743e1b9bdc43e7c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-3fe011496c2c609eb6a9c0bfe3c5312b'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3fe011496c2c609eb6a9c0bfe3c5312b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 33,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Unpublished Comments',
    'visibility' => 0,
  );

  $export['views-6d2a57e265f00a7c950f5bbf9192e385'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6d2a57e265f00a7c950f5bbf9192e385',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 11,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7a4687f27c7d8a837d515e01eb8d5683'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '7a4687f27c7d8a837d515e01eb8d5683',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-81162200c851bd0e41e152a27dedf196'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '81162200c851bd0e41e152a27dedf196',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 30,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a8593940f104e4d4b0269180ae298421'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'a8593940f104e4d4b0269180ae298421',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 9,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog_author_post-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_author_post-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 5,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog_latest_posts-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_latest_posts-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 6,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog_latest_posts-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_latest_posts-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 7,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog_posts_tags_list-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_posts_tags_list-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 8,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-c64be322cdcd178aab2bb71254ac0e6b'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'c64be322cdcd178aab2bb71254ac0e6b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_studies_details1-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'case_studies_details1-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 14,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_studies_details1-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'case_studies_details1-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 12,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_studies_slider-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'case_studies_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_study_details-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'case_study_details-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 17,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-certifieds-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'certifieds-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clients-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 20,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clients-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 18,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clients-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 19,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients-grid'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'clients-grid',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-d6978156a0ff4f44a06bfbff569bf98f'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'd6978156a0ff4f44a06bfbff569bf98f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-e052ba46a3d12dc118fd9d5b973ecb34'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'e052ba46a3d12dc118fd9d5b973ecb34',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hp_jobs-hp_jobs_company'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hp_jobs-hp_jobs_company',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hp_jobs-hp_jobs_home'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hp_jobs-hp_jobs_home',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hp_slideshow-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hp_slideshow-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => 'highlight',
        'status' => 1,
        'theme' => 'summa_revamp',
        'weight' => -45,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-nodequeue_1-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_1-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -29,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_2-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_2-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -33,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_3-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_3-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -32,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_4-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_4-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -30,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_5-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_5-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => -31,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-partners_carousel-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'partners_carousel-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 23,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 25,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-services_list-services_home'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'services_list-services_home',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-services_list-services_services'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'services_list-services_services',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-team-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'team-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 26,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-team-team_company_slider'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'team-team_company_slider',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-team-team_pictures_small'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'team-team_pictures_small',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 27,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-testimonials-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'testimonials-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 29,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-testimonials-testimonial_case'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'testimonials-testimonial_case',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 28,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_blog_posters-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_blog_posters-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 31,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_blog_posters-user_data'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_blog_posters-user_data',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summa_revamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summa_revamp',
        'weight' => 32,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
