<?php
$viewName = 'clients';
?>
<div class="client-casestudies" id="casestudies_cage_<?php print $output; ?>">
<?php print views_embed_view($viewName, 'block_3', $output); ?>
<?php print views_embed_view($viewName, 'block_2', $output); ?>
</div>
