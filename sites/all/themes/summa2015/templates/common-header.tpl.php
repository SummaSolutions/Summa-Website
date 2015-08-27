<div class="full-wrapper">
    <div class="safe-container">
        <div id="header">
            <div class="section clearfix">

                <div id="header-top">
                    <div class="menu-mobile hide-text">
                        <a href="#">Menu</a>
                    </div>
                </div>
                <div id="header-middle">
                    <div class="header-middle-inner">
                        <a href="<?php print $front_page; ?>" title="<?php print t( 'Home' ); ?>" rel="home" id="logo"
                           class="hide-text"><?php print ( $site_name ) ? $site_name : t( 'Summa Solutions' ); ?></a>
                        <?php /* Region "header" => Blocks:  menu-mobile, summa options, summa social media */ ?>
                        <?php print render( $page['header'] ); ?>
                    </div>
                </div>
                <div class="clearfix"></div>
                <?php if ( $page['highlight'] ) : ?>
                    <div id="header-bottom">
                        <?php print render( $page['highlight'] ); ?>
                    </div>
                <?php endif; ?>
                <?php //print $breadcrumb; ?>

            </div>
        </div>
    </div>
</div>