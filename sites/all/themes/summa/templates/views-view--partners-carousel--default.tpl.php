<?php

drupal_add_js(drupal_get_path("theme","summa")."/jCarrousel/jquery.ui.widget.js");
drupal_add_js(drupal_get_path("theme","summa")."/jCarrousel/jCarrousel.js");
drupal_add_css(drupal_get_path("theme", "summa") . "/css/jCarrousel.css");
drupal_add_js(drupal_get_path("theme","summa")."/js/carrousel.js");
echo '
  <div id="partnersInfoBoxContainer" ><div id="partnersInfoBox"><div id="partnersInfoBoxContent"></div></div></div>
  <div id="partnersCarrouselContainer">
    <div id="nextSlideArrow"></div>
    <div id="partnersCarrousel">' . $rows . '</div>
    <div id="prevSlideArrow"></div>
  </div>';
?>
