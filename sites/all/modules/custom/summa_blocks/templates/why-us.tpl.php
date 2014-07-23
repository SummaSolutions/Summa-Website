<?php
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/why-us/why-us.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.glide.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/why-us/sliderControl.js" );
?>
<div class="safe-container container">
    <div class="slider">
        <div class="slides">
            <div class="slide">
                <span>
                    <?php echo t( "Slide 1" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "Slide 2" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "Slide 3" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "Slide 4" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
        </div>
    </div>
    <!-- General Read More butotn -->
    <div class="path only-tablet"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
</div>