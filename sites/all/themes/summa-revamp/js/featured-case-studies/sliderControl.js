var fcsSliderSelector = "#featured-case-studies-container .bxslider";

jQuery(document).ready(function () {
    jQuery(fcsSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});
