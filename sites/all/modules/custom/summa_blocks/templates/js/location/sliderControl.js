var locSliderSelector = ".location-container .bxslider";

jQuery(document).ready(function () {
    jQuery(locSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        mode: 'fade',
        speed: 500,
        auto: true,
        preventDefaultSwipeX: true
    });
});
