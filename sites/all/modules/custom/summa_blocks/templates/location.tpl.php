<?php
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/location/location.css" );
drupal_add_css( drupal_get_path( "theme", "summa_revamp" ) . "/css/jquery.bxslider.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.bxslider.min.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/location/sliderControl.js" );
drupal_add_css( drupal_get_path( "theme", "summa_revamp" ) . "/css/global.css" );
//avoid issues with scroll and api limits
//drupal_add_js("http://maps.googleapis.com/maps/api/js?key=AIzaSyAinJdoSrNxKW3k-8ArbioXeLT2HLl54gw&sensor=false");


?>

<div class="location-container">
    <div class="bxslider">
        <div id="map01" class="slide" style="position:relative" data-latitude="-34.5862644" data-longitude="-58.4422086" data-zoom="17">
            <div class="container">
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
                            <br>+54 11 6091-4603
                            <br>Palermo, Capital Federal
                            <br>argentina@summasolutions.net" );
                        ?>
                    </div>
                </div>
            </div>
        </div>
        <div id="map02" class="slide" style="position:relative" data-latitude="-37.320795" data-longitude="-59.1327"  data-zoom="17">
            <div class="container">
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
                        <br>+54 11 6091-4603
                        <br>Tandil, Buenos Aires
                        <br>argentina@summasolutions.net" );
                        ?>
                    </div>
                </div>
            </div>
        </div>
        <div id="map03" class="slide" style="position:relative" data-latitude="-37.320795" data-longitude="-59.1327"  data-zoom="17">
            <div class="container">
                <div class="tablet-left">
                    <div class="pointer">
                    </div>
                </div>
                <div class="tablet-right">
                    <div class="title">
                        <?php echo t( 'Summa USA' ); ?>
                    </div>
                    <div class="body">
                        <?php echo t( "13500 Pearl Rd, Ste 139-373
                        <br>+1 440 940-6507
                        <br>Cleveland, Ohio
                        <br>usa@summasolutions.net" );
                        ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="google-maps-container">
        <div class="map map01" style="background-image: url('/sites/all/themes/summa-revamp/images/map-1.jpg'); background-position: center center; width: 100%; height: 100%;"></div>
        <div class="map map02" style="background-image: url('/sites/all/themes/summa-revamp/images/map-2.jpg'); background-position: center center; width: 100%; height: 100%; display: none;"></div>
        <div class="map map03" style="background-image: url('/sites/all/themes/summa-revamp/images/map-3.jpg'); background-position: center center; width: 100%; height: 100%; display: none;"></div>
    </div>
</div>
