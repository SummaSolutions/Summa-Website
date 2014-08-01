<?php
/*
 * @file clients.tpl.php
 * Template for the first rendering of the block in DOM
 *
 * Available vars
 * $view_row_count
 * $view_result : View rendered (in other tpl.php)
 * $view_expected_items : Num of items expected to fit a row
 */
global $base_root;

drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/clients/clients.css" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/clients/skin.js" );
drupal_add_js( "var AJAX_URL_CLIENTS = '" . $base_root . "/ajax/views/clients" . "'; ", "inline" );


$pad = '<div class="views-row views-row-pad">
                <div class="views-field views-field-field-picture">
                    <div class="field-content">
                    </div>
                </div>
            </div>';


?>
<div class="clients-wrapper safe-container ">
    <div class="clients-container clearfix">
        <h1><?php echo t( 'Clients' ); ?></h1>

        <div class="view">
            <?php
            echo $view_result;
            ?>
        </div>
    </div>
    <?php
    if ( !$isEnd ):
        ?>
        <div class="clearfix more-container">
            <a class="more" href="#"><?php echo t( 'load more' ); ?></a>
        </div>
    <?php
    endif;
    ?>
    <a class="anchor-next anchor-next-gray"></a>
</div>