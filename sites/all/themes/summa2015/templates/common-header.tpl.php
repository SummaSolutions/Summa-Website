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
<script type="text/javascript">
    // Create a clone of the menu, right next to original.
    var topBar = '#header-middle';
    jQuery(topBar).addClass('original').clone().insertAfter(topBar).addClass('cloned').css('position','fixed').css('top','0').css('margin-top','0').css('z-index','500').removeClass('original').hide();

    scrollIntervalID = setInterval(stickIt, 10);

    function stickIt() {

        var orgElementPos = jQuery(topBar+'.original').offset();
        var orgElementTop = orgElementPos.top + 25;

        if (jQuery(window).scrollTop() >= (orgElementTop)) {
            // scrolled past the original position; now only show the cloned, sticky element.
            // Cloned element should always have same left position and width as original element.
            var orgElement = jQuery(topBar+'.original');
            var coordsOrgElement = orgElement.offset();
            var leftOrgElement = coordsOrgElement.left;
            var widthOrgElement = orgElement.css('width');
            jQuery(topBar+'.cloned').css('left',leftOrgElement+'px').css('top',0).css('width',widthOrgElement).show();
            jQuery(topBar+'.original').css('visibility','hidden');
        } else {
            // not scrolled past the menu; only show the original menu.
            jQuery(topBar+'.cloned').hide();
            jQuery(topBar+'.original').css('visibility','visible');
        }
    }
</script>