<?php
$node = node_load($output);
$image = $node->field_image_small['en'][0]['filename'];
?>
<div class="services">
  <div class="image"><img src="/sites/default/files/<?php print $image; ?>" alt="" /></div>
  <div class="title"><a href="/node/<?php print $node->nid; ?>"><?php print $node->title; ?></a></div>
  <div class="more"><a href="/node/<?php print $node->nid; ?>">more <img align="absmiddle" src="/sites/all/themes/summa/images/ico_plus.png"></a></div>
</div>