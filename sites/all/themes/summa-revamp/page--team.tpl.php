<?php
/**
 * Created by PhpStorm.
 * User: summa
 * Date: 7/30/14
 * Time: 12:00 PM
 */

/* Layout */
//drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/team/page--team.css' );
/* Are you looking for a change? */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/team/custom-openings/custom-openings.css' );


include( 'templates/page.tpl.php' );