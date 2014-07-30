<?php
/**
 * Created by PhpStorm.
 * User: summa
 * Date: 7/30/14
 * Time: 12:00 PM
 */

/* Layout style */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/page--company.css' );
/* Company Description Block */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/company-description/company-description.css' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/company/company-description/skin.js' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );


include( 'templates/page.tpl.php' );