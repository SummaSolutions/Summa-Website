<?php
    drupal_add_css( drupal_get_path("module", "summa_blocks") ."/templates/css/contact-map/contact-map.css");
    drupal_add_js("http://maps.googleapis.com/maps/api/js?key=AIzaSyAinJdoSrNxKW3k-8ArbioXeLT2HLl54gw&sensor=false");
    drupal_add_js(drupal_get_path("module", "summa_blocks")."/templates/js/contact-map/maps.js")
?>

<div class="contact-map-container">
    <ul>
        <li>
            <div class="label">
                <span class="country"><?php echo t('Argentina'); ?></span>
                <span class="address"><?php echo t('Av. Cordoba 5779 1st floor Office C'); ?></span>
                <span class="city"><?php echo t('Palermo, Capital federal'); ?></span>
                <span class="email">
                    <a href="mailto:argentina@summasolutions.net">argentina@summasolutions.net</a>
                </span>
            </div>
            <div class="map-container">
                <div class="map" data-latitude="-34.5862644" data-longitude="-58.4422086" data-zoom="17"></div>
            </div>
        </li>
        <li>
            <div class="label">
                <span class="address"><?php echo t('Santamarina 876'); ?></span>
                <span class="city"><?php echo t('Tandil, Buenos Aires'); ?></span>
                <span class="email">
                    <a href="mailto:argentina@summasolutions.net">argentina@summasolutions.net</a>
                </span>
            </div>
            <div class="map-container">
                <div class="map" data-latitude="-37.3207268" data-longitude="-59.1326921" data-zoom="17"></div>
            </div>
        </li>
    </ul>
</div>
