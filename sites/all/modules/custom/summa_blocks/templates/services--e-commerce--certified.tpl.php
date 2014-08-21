<?php
global $base_url;
$resource_path = "sites/all/modules/custom/summa_blocks/templates/images";

drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/services-ecommerce-certified/services-ecommerce-certified.css" );
drupal_add_css( drupal_get_path( "theme", "summa_revamp" ) . "/css/jquery.bxSlider.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.bxslider.min.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/services-ecommerce-certified/skin.js" );
?>

<div class="ecommerce-certified clearfix safe-container">
    <div class="features-container">
        <h3><?php echo t( 'Notable features' ); ?></h3>
        <ul>
            <li><?php echo t( 'Integrated with Google Analytics' ); ?></li>
            <li><?php echo t( 'Multiple Images with Zoom' ); ?></li>
            <li><?php echo t( 'Magento Solr intergation' ); ?></li>
            <li><?php echo t( 'Udropship' ); ?></li>
            <li><?php echo t( 'Add to Wishlist' ); ?></li>
            <li><?php echo t( 'Send to a Friend' ); ?></li>
            <li><?php echo t( 'Batch Import and Export of Catalog' ); ?></li>
            <li><?php echo t( 'One Page Checkout' ); ?></li>
            <li><?php echo t( 'Multilingual' ); ?></li>
        </ul>
    </div>
    <div class="certified-container">
        <h3 class="middle-line">
            <div class="white-mask">
                <?php echo t( 'Magento Certified' ); ?>
            </div>
        </h3>
        <div class="row">
            <div class="certified-item"><img
                    src="<?php echo $base_url . "/" . $resource_path . "/certified-developer.gif"; ?>"></div>
            <div class="certified-item"><img
                    src="<?php echo $base_url . "/" . $resource_path . "/certified-developer-plus.gif"; ?>"></div>
            <div class="certified-item"><img
                    src="<?php echo $base_url . "/" . $resource_path . "/certified-developer-frontend.gif"; ?>"></div>
        </div>
        <div class="row  middle-line">

            <div class="certified-item certified-left white-mask"><img
                    src="<?php echo $base_url . "/" . $resource_path . "/certified-magento-gold.png"; ?>"></div>
        </div>
    </div>
</div>