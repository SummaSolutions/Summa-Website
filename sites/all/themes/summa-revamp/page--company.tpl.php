<?php
/**
 * Created by PhpStorm.
 * User: summa
 * Date: 7/30/14
 * Time: 12:00 PM
 */

/* Layout */
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/page--company.css' );
/* Company Description Block */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/company-description/company-description.css' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/company/company-description/skin.js' );
/* Mission & Vision */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/mission-vision/mission-vision.css' );
/* Manifesto */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/manifesto/manifesto.css' );
/* Are you looking for a change? */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/company/custom-openings/custom-openings.css' );


include( 'templates/page.tpl.php' );