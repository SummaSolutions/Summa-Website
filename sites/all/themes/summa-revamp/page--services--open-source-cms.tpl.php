<?php

/* Layout */
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/jquery.dotdotdot.min.js' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/internal/page--services.css' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/services/open-source-cms/page--services--open-source-cms.css' );

include( 'templates/page.tpl.php' );