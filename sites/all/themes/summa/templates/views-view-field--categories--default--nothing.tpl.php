<?php
$load = taxonomy_term_load($row->tid);
$color = $load->field_category_color['und'][0]['value'];
?>
<div style="background: <?php print $color; ?>" class="blog-color"><img src="/sites/all/themes/summa/images/bg_blog_default.png" /></div>