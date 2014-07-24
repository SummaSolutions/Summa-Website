var cerSliderSelector = "#certifieds-container .bxslider";
var cerSliderControl;

jQuery(document).ready(function () {
    if (!jQuery("body").hasClass("breakpoint-641"))
        cerSliderControl = jQuery(cerSliderSelector).bxSlider({
            wrapperClass: 'bx-wrapper bx-wrapper-green',
            controls: false,
            speed: 300,
            auto: true,
            preventDefaultSwipeX: true
        });
});

jQuery(window).bind("exitBreakpoint641", function () {
    cerSliderControl = jQuery(cerSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});


jQuery(window).bind("enterBreakpoint641", function () {
    if (typeof(cerSliderControl) != "undefined")
        cerSliderControl.destroySlider();
});
