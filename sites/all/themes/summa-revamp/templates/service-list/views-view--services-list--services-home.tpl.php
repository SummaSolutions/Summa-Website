<?php
/**
 * Variables (available):
 * $classes_array: An array of classes determined in template_preprocess_views_view(). Default classes are: .view .view-[css_name] .view-id-[view_name] .view-display-id-[display_name] .view-dom-id-[dom_id]
 * $classes: A string version of $classes_array for use in the class attribute
 * $css_name: A css-safe version of the view name.
 * $css_class: The user-specified classes names, if any
 * $header: The view header
 * $footer: The view footer
 * $rows: The results of the view query, if any
 * $empty: The empty text to display if the view is empty
 * $pager: The pager next/prev links to display, if any
 * $exposed: Exposed widget form/info to display
 * $feed_icon: Feed icon to display, if any
 * $more: A link to view more, if any
 */
drupal_add_css( drupal_get_path( "theme", "summa_revamp" ) . "/css/service-list-home/service-list.css" );
drupal_add_js( drupal_get_path( "theme", "summa_revamp" ) . "/js/service-list/skin.js" );
?>
    <div class="subtitle"><?php
        echo t( 'The biggest key to success in e-commerce is through an effective website. Let´s work together on creating the best!' );
        ?>
    </div>
<?php if ( $rows ): ?>
    <?php print $rows; ?>
<?php endif; ?>