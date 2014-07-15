<?php
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/location/location.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.glide.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/location/sliderControl.js" );
?>

<div class="location-container">
    <div class="slider">
        <div class="slides">
            <div class="slide" data-background_class="map-bsas">
                <div class="background-map map-bsas"></div>
                <div class="tablet-left">
                    <div class="pointer">
                    </div>
                </div>
                <div class="tablet-right">
                    <div class="title">
                        <?php echo t( 'Argentina HQ' ); ?>
                    </div>
                    <div class="body">
                        <?php echo t( "Av. Cordoba 5779 1st floor Office C
                            <br>
                            Palermo, Capital Federal
                            <br>
                            argentina@summasolutions.net" );
                        ?>
                    </div>
                </div>
            </div>
            <div class="slide" data-background_class="map-tandil">
                <div class="background-map map-tandil"></div>
                <div class="tablet-left">
                    <div class="pointer">
                    </div>
                </div>
                <div class="tablet-right">
                    <div class="title">
                        <?php echo t( 'Argentina' ); ?>
                    </div>
                    <div class="body">
                        <?php echo t( "Av. Santamarina 876
                            <br>
                            Tandil, Buenos Aires
                            <br>
                            argentina@summasolutions.net" );
                        ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>