<?php
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/skin.js" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/breakpoints.js" );
/* Case studies */
drupal_add_css(drupal_get_path( "theme", "summa_revamp" ) . "");
?>
<div class="fixed-anchor">
    <a class="anchor-prev anchor-prev-gray" href="#top"></a>
</div>
<div id="page-wrapper">
    <?php include_once( 'common-header.tpl.php' ); ?>

    <div id="page">
        <div id="main-wrapper">
            <div id="main" class="clearfix<?php print ( $main_menu || $page['navigation'] ) ? ' with-navigation' : ''; ?>">

                <div id="content" class="column">
                    <div class="section">
                        <a id="main-content"></a>
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
            </div>
        </div>
    </div>

    <?php include_once( 'common-footer.tpl.php' ); ?>
</div>