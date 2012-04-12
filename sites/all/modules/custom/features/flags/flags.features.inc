<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => '0',
    'types' => array(
      '0' => 'article',
      '1' => 'blog',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 2,
      ),
      'unflag' => array(
        '0' => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'flags',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Featured Content".
  $flags['featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured Content',
    'global' => '1',
    'types' => array(
      '0' => 'blog',
      '1' => 'article',
      '2' => 'case_study',
      '3' => 'client',
      '4' => 'job',
      '5' => 'page',
      '6' => 'partner',
      '7' => 'product',
      '8' => 'service',
    ),
    'flag_short' => 'Feature this [node:type]',
    'flag_long' => 'Add this [node:type] to the featured list',
    'flag_message' => 'This [node:type] has been flagged as Featured',
    'unflag_short' => 'Un-Feature this [node:type]',
    'unflag_long' => 'Remove this [node:type] from the featured list',
    'unflag_message' => 'This [node:type] has been removed from the featured list',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
      'unflag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => '0',
    'module' => 'flags',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Featured Case Study in Home Page".
  $flags['featured_case_study'] = array(
    'content_type' => 'node',
    'title' => 'Featured Case Study in Home Page',
    'global' => '1',
    'types' => array(
      '0' => 'case_study',
    ),
    'flag_short' => 'Feature this [node:type] in "Case Study Home Page"',
    'flag_long' => 'Add this [node:type] to the featured list',
    'flag_message' => 'This [node:type] has been flagged as Featured',
    'unflag_short' => 'Un-Feature this [node:type]  in "Case Study Home Page"',
    'unflag_long' => 'Remove this [node:type] from the featured list',
    'unflag_message' => 'This [node:type] has been removed from the fetaured list',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
      'unflag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'flags',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Featured Products in Home Page".
  $flags['featured_products'] = array(
    'content_type' => 'node',
    'title' => 'Featured Products in Home Page',
    'global' => '1',
    'types' => array(
      '0' => 'product',
    ),
    'flag_short' => 'Feature this [node:type] in "Featured Products"',
    'flag_long' => 'Add this [node:type] to the featured list',
    'flag_message' => 'This [node:type] has been flagged as Featured',
    'unflag_short' => 'Un-Feature this [node:type]  in "Featured Products"',
    'unflag_long' => 'Remove this [node:type] from the featured list',
    'unflag_message' => 'This [node:type] has been removed from the fetaured list',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
      'unflag' => array(
        '0' => '3',
        '1' => '4',
        '2' => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => '1',
    'module' => 'flags',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
