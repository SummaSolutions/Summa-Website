<?php
global $base_url;
$resources_path = $base_url . '/' . drupal_get_path( "module", "summa_blocks" ) . "/templates/images";
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/services-id-quote/services-id-quote.css" );
?>
<div class="quote-wrapper">
    <div class="image-left-container">
        <img class="image-left" src="<?php echo $resources_path . "/interaction-design-image-left.png"; ?>">
    </div>
    <div class="quote-region">
        <div class="quote-container">
            <div class="padding-quote double-prime">
                “
            </div>
            <blockquote>
                Your website is the face of your business. It needs to be more than just pretty; it needs to effectively
                communicate who you are and what you do, while enticing visitors to answer your call to action.<span
                    class="double-prime">”</span>
            </blockquote>
        </div>
    </div>
    <div class="image-right-container">
        <img class="image-right" src="<?php echo $resources_path . "/interaction-design-image-right.png"; ?>">
    </div>
</div>