var lpSliderSelector = "#latest-posts-container .bxslider";
var lpSliderControl;

jQuery(window).load(function () {
    if (!jQuery("body").hasClass("breakpoint-641"))
        lpSliderControl = jQuery(lpSliderSelector).bxSlider({
            wrapperClass: 'bx-wrapper',
            controls: false,
            speed: 300,
            auto: true,
            preventDefaultSwipeX: true
        });
})

jQuery(window).bind("exitBreakpoint641", function () {
    lpSliderControl = jQuery(lpSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});


jQuery(window).bind("enterBreakpoint641", function () {
    if (typeof(lpSliderControl) != "undefined")
        lpSliderControl.destroySlider();
});
