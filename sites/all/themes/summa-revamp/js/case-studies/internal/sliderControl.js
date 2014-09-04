var cssSliderSelector = "#case-studies-slider-container .bxslider";

jQuery(document).ready(function () {
    jQuery(cssSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});