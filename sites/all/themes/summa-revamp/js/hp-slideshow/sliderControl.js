var hbSliderSelector = "#header-bottom .slider";


jQuery(document).ready(function () {
    jQuery(hbSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});