<?php

/* Layout */
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/page--services.css' );
/* Services Description Block */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/services-description/services-description.css' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/services/services-description/skin.js' );

include( 'templates/page.tpl.php' );