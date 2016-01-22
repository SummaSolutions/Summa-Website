<?php
/**
 * @file
 * Theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlight']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */

drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/skin.js" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/breakpoints.js" );
/* Case studies */
drupal_add_css(drupal_get_path( "theme", "summa_revamp" ) . "");
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
                        <a href="<?php print $front_page; ?>" title="<?php print t( 'Home' ); ?>" rel="home" id="logo"
                           class="hide-text"><?php print ( $site_name ) ? $site_name : t( 'Summa Solutions' ); ?></a>
                        <div class="tel menu-mobile" style="font-size:17px;color:#fff;padding:20px 0 0 8px;clear:both;">
                            <b>Phones
                                &nbsp;&nbsp;&nbsp;ARG: +54 11 6091-4603
                                &nbsp;&nbsp;&nbsp;USA: +1 440 940-6507</b>
                        </div>
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
                        print render( $page['header'] );
                        ?>
                        <div class="tel" style="font-size:13px;color:#fff;text-align:right;padding:25px 15px 0 0;">
                            <b>Phones
                            &nbsp;&nbsp;&nbsp;ARG: +54 11 6091-4603
                            &nbsp;&nbsp;&nbsp;USA: +1 440 940-6507</b>
                        </div>
                    </div>
                    <?php
                    if ( $page['highlight'] ) :
                        ?>
                        <div id="header-bottom">
                            <?php print render( $page['highlight'] ); ?>
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
            <div id="main" class="clearfix<?php if ( $main_menu || $page['navigation'] ) {
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
                        <?php if ( $tabs ): ?>
                            <div class="tabs"><?php print render( $tabs ); ?></div>
                        <?php endif; ?>
                        <?php print render( $page['help'] ); ?>
                        <?php if ( $action_links ): ?>
                            <ul class="action-links"><?php print render( $action_links ); ?></ul>
                        <?php endif; ?>
                        <?php print render( $page['content'] ); ?>
                        <?php print $feed_icons; ?>
                    </div>
                </div>
                <?php /*
                <!-- /.section, /#content -->

                <?php if ( $page['navigation'] || $main_menu ): ?>
                    <div id="navigation">
                        <div class="section clearfix">

                            <?php print theme( 'links__system_main_menu', array(
                                'links' => $main_menu,
                                'attributes' => array(
                                    'id' => 'main-menu',
                                    'class' => array( 'links', 'clearfix' ),
                                ),
                                'heading' => array(
                                    'text' => t( 'Main menu' ),
                                    'level' => 'h2',
                                    'class' => array( 'element-invisible' ),
                                ),
                            ) ); ?>

                            <?php print render( $page['navigation'] ); ?>

                        </div>
                    </div> <!-- /.section, /#navigation -->
                <?php endif; ?>

                <?php print render( $page['sidebar_first'] ); ?>

                <?php print render( $page['sidebar_second'] ); ?>
*/
                ?>
            </div>
        </div>
        <!-- /#main, /#main-wrapper -->


    </div>
</div> <!-- /#page, /#page-wrapper -->