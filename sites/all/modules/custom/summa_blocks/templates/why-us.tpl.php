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
                    <?php echo t( "Something that we're proude to share with you" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "And i could always tell when some-one i holding a gru-udge" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "When i see the five'clock news, i dont wanna grow up" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
            <div class="slide">
                <span>
                    <?php echo t( "We're a happy Family, me, mom and daddy!" ); ?>
                </span>

                <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
            </div>
        </div>
    </div>
    <!-- General Read More butotn -->
    <div class="path only-tablet"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
</div>