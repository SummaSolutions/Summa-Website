<?php
/**
 * Created by PhpStorm.
 * User: summa
 * Date: 7/30/14
 * Time: 12:00 PM
 */

/* Layout */
drupal_add_js(drupal_get_path('theme', 'summa_revamp') . '/js/jquery.dotdotdot.min.js');
drupal_add_css(drupal_get_path('theme', 'summa_revamp') . '/css/company/page--company.css');
drupal_add_css(drupal_get_path('theme', 'summa_revamp') . '/css/company/jobs/page--node-job.css');

/* Are you looking for a change? */
drupal_add_css(drupal_get_path('theme', 'summa_revamp') . '/css/company/custom-openings/custom-openings.css');

#include( 'templates/page.tpl.php' );

drupal_add_js(drupal_get_path("theme", "summa_revamp") . "/js/skin.js");
drupal_add_js(drupal_get_path("theme", "summa_revamp") . "/js/breakpoints.js");
/* Case studies */
drupal_add_css(drupal_get_path("theme", "summa_revamp") . "");

?>

<div class="fixed-anchor">
    <a class="anchor-prev anchor-prev-gray" href="#top"></a>
</div>
<div id="page-wrapper">
    <div class="full-wrapper">
        <div class="safe-container">
            <!-- header -->
            <div id="header">
                <div class="section clearfix">

                    <div id="header-top">
                        <div class="menu-mobile hide-text">
                            <a href="#">Menu</a>
                        </div>
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="hide-text"><?php print ($site_name) ? $site_name : t('Summa Solutions'); ?></a>
                    </div>
                    <div id="header-middle">
                        <?php
                        /**
                         * Region "header"
                         * Blocks:
                         *  menu-mobile
                         *  summa options
                         *  summa social media
                         */
                        print render($page['header']);
                        ?>
                    </div>
                    <?php
                    if ($page['highlight']) :
                        ?>
                        <div id="header-bottom">
                            <?php print render($page['highlight']); ?>
                        </div>
                    <?php
                    endif;
                    ?>
                    <?php //print $breadcrumb; ?>

                </div>
            </div>
        </div>
    </div>
    <!-- /.section, /#header -->
    <div id="page">
        <div id="main-wrapper">
            <div id="main" class="clearfix<?php if ($main_menu || $page['navigation']) {
                print ' with-navigation';
            } ?>">

                <div id="content" class="column">
                    <div class="section">
                        <a id="main-content"></a>
                        <!--                        --><?php //print render( $title_prefix ); ?>
                        <!--                        --><?php //if ( $title ): ?>
                        <!--                            <h1 class="title" id="page-title">--><?php //print $title; ?><!--</h1>-->
                        <!--                        --><?php //endif; ?>
                        <!--                        --><?php //print render( $title_suffix ); ?>
                        <?php print $messages; ?>
                        <?php if ($tabs && in_array('administrator', $user->roles)): ?>
                            <div class="tabs"><?php print render($tabs); ?></div>
                        <?php endif; ?>
                        <?php print render($page['help']); ?>
                        <?php if ($action_links): ?>
                            <ul class="action-links"><?php print render($action_links); ?></ul>
                        <?php endif; ?>

                        <div class="panel-flexible canvas-contact clearfix">
                            <div class="panel-flexible-inside canvas-contact-inside">
                                <div class="panels-flexible-row panels-flexible-row-canvas-contact-main-row panels-flexible-row-first clearfix row-white">
                                    <div class="inside panels-flexible-row-inside panels-flexible-row-canvas-contact-main-row-inside panels-flexible-row-inside-first clearfix">
                                        <div class="panels-flexible-region panels-flexible-region-canvas-contact-main_ panels-flexible-region-first region-main">
                                            <div class="inside panels-flexible-region-inside panels-flexible-region-canvas-contact-main_-inside panels-flexible-region-inside-first">
                                                <div class="panel-pane pane-block pane-block-29 about-us-container">
                                                    <?php print render($page['content']); ?>
                                                </div>
                                                <div class="panel-separator"></div>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <?php print $feed_icons; ?>
                        </div>
                    </div>
                </div>
            </div>
            <!-- /#main, /#main-wrapper -->


        </div>
    </div>
    <!-- /#page, /#page-wrapper -->