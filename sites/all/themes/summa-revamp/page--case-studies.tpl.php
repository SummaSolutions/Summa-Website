<?php

/* Layout */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/case-studies/page--case-studies.css' );
drupal_add_js( drupal_get_path( 'theme', 'summa_revamp' ) . '/js/case-studies/skin.js' );

include( summa_revamp_getThemeRealpath().'templates/page.tpl.php' );