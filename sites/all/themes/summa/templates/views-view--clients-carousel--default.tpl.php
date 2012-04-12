<?php

drupal_add_js(drupal_get_path("theme","summa")."/jCarrousel/jquery.ui.widget.js");
drupal_add_js(drupal_get_path("theme","summa")."/jCarrousel/jCarrousel.js");
drupal_add_css(drupal_get_path("theme", "summa") . "/css/jCarrousel.css");
drupal_add_js(drupal_get_path("theme","summa")."/js/carrousel.js");
echo '
  <div id="clientsInfoBoxContainer" ><div id="clientsInfoBox"><div id="clientsInfoBoxContent"></div></div></div>
  <div id="clientsCarrouselContainer">
    <div id="nextSlideArrow"></div>
    <div id="clientsCarrousel">' . $rows . '</div>
    <div id="prevSlideArrow"></div>
  </div>';
?>
