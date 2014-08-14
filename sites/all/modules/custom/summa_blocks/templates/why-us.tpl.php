<?php
drupal_add_css( drupal_get_path( "module", "summa_blocks" ) . "/templates/css/why-us/why-us.css" );
drupal_add_css( drupal_get_path( "theme", "summa_revamp" ) . "/css/jquery.bxSlider.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/jquery.bxslider.min.js" );
drupal_add_js( drupal_get_path( "module", "summa_blocks" ) . "/templates/js/why-us/sliderControl.js" );
?>
<div class="safe-container container">
    <div class="bxslider">
        <div class="slide">
            <span>
                <?php echo t( "Magento Gold Solution Partner since 2010 with +50 projects implemented." ); ?>
            </span>

            <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
        </div>
        <div class="slide">
            <span>
                <?php echo t( "Pioneers in Agile Development in Argentina with extensive hands-on track record." ); ?>
            </span>

            <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
        </div>
        <div class="slide">
            <span>
                <?php echo t( "More than 15 years of experience in off-shore development, providing solutions." ); ?>
            </span>

            <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
        </div>
        <div class="slide">
            <span>
                <?php echo t( "Bilingual and multi-competence teams, highly trained." ); ?>
            </span>

            <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
        </div>
        <div class="slide">
            <span>
                <?php echo t( "Local presence in USA, with a strong network of partners in Latin America and Europe." ); ?>
            </span>

            <div class="path only-mobile"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
        </div>
    </div>
    <!-- General Read More butotn -->
    <div class="path only-tablet"><a href="#"><?php echo t( "READ MORE" ); ?></a></div>
</div>