<?php
$load = taxonomy_term_load($output);
$color = $load->field_category_color['und'][0]['value'];
$name = $load->name;
?>
<div style="background: <?php print $color; ?>;" class="blog-color"><?php print $name; ?></div>