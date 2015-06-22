<?php
/**
 * Created by PhpStorm.
 * User: summa
 * Date: 7/30/14
 * Time: 12:00 PM
 */

/* Layout */
drupal_add_js(drupal_get_path("theme", "summa_revamp") . "/js/skin.js");
drupal_add_js(drupal_get_path("theme", "summa_revamp") . "/js/breakpoints.js");
/* Case studies */
drupal_add_css(drupal_get_path("theme", "summa_revamp") . "/css/quiz/page--node-quiz.css");

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
                        <?php print $messages; ?>
                        <?php if ($tabs && in_array('administrator', $user->roles)) : ?>
                            <div class="tabs"><?php print render($tabs); ?></div>
                        <?php endif; ?>
                        <?php print render($page['help']); ?>
                        <?php if ($action_links): ?>
                            <ul class="action-links"><?php print render($action_links); ?></ul>
                        <?php endif; ?>

                        <div class="panel-flexible canvas-quiz clearfix">
                            <div class="panel-flexible-inside canvas-quiz-inside">
                                <div class="panels-flexible-row panels-flexible-row-canvas-quiz-main-row panels-flexible-row-first clearfix row-white">
                                    <div class="inside panels-flexible-row-inside panels-flexible-row-canvas-quiz-main-row-inside panels-flexible-row-inside-first clearfix">
                                        <div class="panels-flexible-region panels-flexible-region-canvas-quiz-main_ panels-flexible-region-first region-main">
                                            <div class="inside panels-flexible-region-inside panels-flexible-region-canvas-quiz-main_-inside panels-flexible-region-inside-first">
                                                <div class="panel-pane pane-block pane-block-29 quiz-container">
                                                    <h2 class="pane-title">Quiz</h2>
                                                    <div class="pane-content">
                                                        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec varius ut risus eget blandit. Aenean et pretium felis. Morbi id sapien at nisi semper malesuada nec posuere ante. Quisque eleifend dapibus eros, ut fermentum libero interdum vitae. Sed malesuada sapien odio, ut blandit metus ultrices rhoncus. Vivamus et ullamcorper nibh. Phasellus massa urna, aliquam at nunc ut, dignissim egestas ipsum. Quisque sed hendrerit odio, nec dictum neque. Duis a ornare purus, non sodales lacus.</p>
                                                    </div>
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