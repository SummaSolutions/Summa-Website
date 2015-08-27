<?php

/* Layout */
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/landing/page--services.css' );
/* Services Description Block */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/landing/services-description/services-description.css' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/services/services-description/skin.js' );

include( summa_revamp_getThemeRealpath().'templates/page.tpl.php' );