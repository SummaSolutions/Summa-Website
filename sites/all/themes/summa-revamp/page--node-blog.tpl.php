<?php

/* Layout */
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/blog/landing/page--blogposts.css' );
drupal_add_css( drupal_get_path( 'theme', 'summa_revamp' ) . '/css/blog/internal/page--blogposts-internal.css' );


include( summa_revamp_getThemeRealpath().'templates/page.tpl.php' );