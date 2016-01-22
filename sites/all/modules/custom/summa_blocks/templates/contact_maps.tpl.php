<?php
    drupal_add_css( drupal_get_path("module", "summa_blocks") ."/templates/css/contact-map/contact-map.css");
    //drupal_add_js("//maps.googleapis.com/maps/api/js?key=AIzaSyCd0nqhGvqDa08RABxMMt1jkmvvb8Rvv5Y&sensor=false");
    //drupal_add_js(drupal_get_path("module", "summa_blocks")."/templates/js/contact-map/maps.js");

$location = array(
    'palermo' => array(
        'address' => '<strong>Palermo, Capital Federal</strong><br>Av. Cordoba 5779 1st floor Office C<br>argentina@summasolutions.net',
        'map' => 'http://maps.google.com/maps/api/staticmap?center=-34.5862644,-58.4422086,&zoom=15&markers=-34.5862644,-58.4422086&path=color:0x0000FF80|weight:5|-34.5862644,-58.4422086&size=500x320',
        'url' => 'http://maps.google.com/?q=Av%20Cordoba%205779,%20Palermo,%20Buenos%20Aires',
    ),
    'tandil' => array(
        'address' => '<strong>Tandil, Buenos Aires</strong><br>Av. Santamarina 876<br>argentina@summasolutions.net',
        'map' => 'http://maps.google.com/maps/api/staticmap?center=-37.320795,-59.1327,&zoom=15&markers=-37.320795,-59.1327&path=color:0x0000FF80|weight:5|-37.320795,-59.1327&size=500x320',
        'url' => 'http://maps.google.com/?q=Av%20Santamarina%20876,%20Tandil,%20Buenos%20Aires',
    ),
    'cleveland' => array(
        'address' => '<strong>Cleveland, Ohio</strong><br>13500 Pearl Rd, Ste 139-373<br>44136 United States',
        'map' => 'http://maps.google.com/maps/api/staticmap?center=41.369046,-81.8033568,&zoom=15&markers=41.369046,-81.8033568&path=color:0x0000FF80|weight:5|41.369046,-81.8033568&size=500x320',
        'url' => 'http://maps.google.com/?q=13500%20Pearl%20Rd%20Ste%20139-373,%20Cleveland,%20Ohio',
    ),
);

?>

<div class="contact-map-container">
    <ul>
        <?php foreach ($location as $place): ?>
            <li></li>
        <?php endforeach; ?>
        <li>
            <div class="label">
                <span class="city"><?php echo t('Palermo, Capital Federal'); ?></span>
                <span class="tel">+54 11 6091-4603</span>
                <span class="address"><?php echo t('Av. Cordoba 5779 1st floor Office C'); ?></span>
                <span class="country"><?php echo t('Argentina'); ?></span>
                <span class="email">
                    <a href="mailto:argentina@summasolutions.net">argentina@summasolutions.net</a>
                </span>
            </div>
            <div class="map-container">
                <a class="map" rel="nofollow" target="_blank" href="http://maps.google.com/?q=Av%20Cordoba%205779,%20Palermo,%20Buenos%20Aires">
                    <img style="width:100%;height:auto;" src="http://maps.google.com/maps/api/staticmap?center=-34.5862644,-58.4422086,&zoom=15&markers=-34.5862644,-58.4422086&path=color:0x0000FF80|weight:5|-34.5862644,-58.4422086&size=500x320">
                </a>
            </div>
        </li>
        <li>
            <div class="label">
                <span class="city"><?php echo t('Tandil, Buenos Aires'); ?></span>
                <span class="tel">+54 11 6091-4603</span>
                <span class="address"><?php echo t('Santamarina 876'); ?></span>
                <span class="country"><?php echo t('Argentina'); ?></span>
                <span class="email">
                    <a href="mailto:argentina@summasolutions.net">argentina@summasolutions.net</a>
                </span>
            </div>
            <div class="map-container">
                <a class="map" rel="nofollow" target="_blank" href="http://maps.google.com/?q=Av%20Santamarina%20876,%20Tandil,%20Buenos%20Aires">
                    <img style="width:100%;height:auto;" src="http://maps.google.com/maps/api/staticmap?center=-37.320795,-59.1327,&zoom=15&markers=-37.320795,-59.1327&path=color:0x0000FF80|weight:5|-37.320795,-59.1327&size=500x320">
                </a>
            </div>
        </li>
        <li>
            <div class="label">
                <span class="city"><?php echo t('Cleveland, Ohio'); ?></span>
                <span class="tel">+1 440 940-6507</span>
                <span class="address"><?php echo t('13500 Pearl Rd, Ste 139-373'); ?></span>
                <span class="country"><?php echo t('USA'); ?></span>
                <span class="email">
                    <a href="mailto:usa@summasolutions.net">usa@summasolutions.net</a>
                </span>
            </div>
            <div class="map-container">
                <a class="map" rel="nofollow" target="_blank" href="http://maps.google.com/?q=13500%20Pearl%20Rd%20Ste%20139-373,%20Cleveland,%20Ohio">
                    <img style="width:100%;height:auto;" src="http://maps.google.com/maps/api/staticmap?center=41.369046,-81.8033568,&zoom=15&markers=41.369046,-81.8033568&path=color:0x0000FF80|weight:5|41.369046,-81.8033568&size=500x320">
                </a>
            </div>
        </li>
    </ul>
</div>
