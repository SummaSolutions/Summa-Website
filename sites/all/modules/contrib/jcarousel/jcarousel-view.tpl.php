<?php
// $Id: jcarousel-view.tpl.php,v 1.1.2.1 2010/11/26 22:04:31 quicksketch Exp $

/**
 * @file jcarousel-view.tpl.php
 * View template to display a list as a carousel.
 */
?>
<ul class="<?php print $jcarousel_classes; ?>">
  <?php foreach ($rows as $id => $row): ?>
    <li class="<?php print $classes[$id]; ?>"><?php print $row; ?></li>
  <?php endforeach; ?>
</ul>
