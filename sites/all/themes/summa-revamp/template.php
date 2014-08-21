<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to summa_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: summa_breadcrumb()
 *
 *   where summa is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Implementation of HOOK_theme().
 */
function summa_revamp_theme( &$existing, $type, $theme, $path )
{
    $hooks = zen_theme( $existing, $type, $theme, $path );
    // Add your theme hooks like this:
    /*
    $hooks['hook_name_here'] = array( // Details go here );
    */
    // @TODO: Needs detailed comments. Patches welcome!
    return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function summa_preprocess_page(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');

  // To remove a class from $classes_array, use array_diff().
  //$vars['classes_array'] = array_diff($vars['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function summa_preprocess_node(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // summa_preprocess_node_page() or summa_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $vars['node']->type;
  if (function_exists($function)) {
    $function($vars, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function summa_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function summa_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

function summa_revamp_preprocess_page( &$variables )
{
    // Suggest page template by node type
    if ( !empty( $variables['node'] ) ) {
        $variables['theme_hook_suggestions'][] = 'page__node_' . $variables['node']->type;
    }
    // Suggest page templates by path ("page--pathalias.tpl.php")
    if ( module_exists( 'path' ) ) {
        $alias = drupal_get_path_alias( str_replace( '/edit', '', $_GET['q'] ) );
        if ( $alias != $_GET['q'] ) {
            $template_filename = 'page';
            foreach ( explode( '/', $alias ) as $path_part ) {
                $template_filename = $template_filename . '__' . str_replace( '-', '_', $path_part );
            }
            $variables['theme_hook_suggestions'][] = $template_filename;
        }
    }

}

function summa_revamp_get_homepage_blocks()
{
    for ( $i = 1; $i < 30; $i++ ) {
        $block = block_load( 'block', $i );
        $key = explode( ' ', strtolower( $block->title ) );
        $content[$key[0]] = block_custom_block_get( $i );
    }
    $content['hp_slideshow'] = views_embed_view( 'hp_slideshow' );
    $content['services_list'] = views_embed_view( 'services_list' );
    $pause = null;
}

function summa_revamp_js_alter( &$javascript )
{
    //We define the path of our new jquery core file
    //assuming we are using the minified version 1.8.3
    $jquery_path = drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery-1.8.3.min.js';

    //We duplicate the important information from the Drupal one
    $javascript[$jquery_path] = $javascript['misc/jquery.js'];
    //..and we update the information that we care about
    $javascript[$jquery_path]['version'] = '2.1.1';
    $javascript[$jquery_path]['data'] = $jquery_path;

    //Then we remove the Drupal core version
    unset( $javascript['misc/jquery.js'] );
}