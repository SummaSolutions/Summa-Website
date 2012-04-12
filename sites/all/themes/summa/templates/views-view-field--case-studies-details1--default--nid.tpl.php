<?php
$node = node_load($output);
?>
<div class="testimonials">
  <div class="body"><img src="/sites/all/themes/summa/images/quote_1.jpg"><?php print $node->body['en'][0]['value']; ?><img align="bottom" src="/sites/all/themes/summa/images/quote_2.jpg"></div>	
  <div class="name"><?php print $node->field_testimonial_name['en'][0]['value']; ?></div>
  <div class="position"><?php print $node->field_testimonial_position['en'][0]['value']; ?></div>
  <div class="company"><?php print $node->field_testimonial_company['en'][0]['value']; ?></div>
</div>