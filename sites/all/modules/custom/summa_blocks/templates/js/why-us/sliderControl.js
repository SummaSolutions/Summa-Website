var wuSliderSelector = ".pane-summa-blocks-why-us .bxslider";
var wuSliderControl;


jQuery(window).load(function () {
    if (!jQuery("body").hasClass("breakpoint-641"))
        wuSliderControl = jQuery(wuSliderSelector).bxSlider({
            wrapperClass: 'bx-wrapper',
            controls: false,
            speed: 300,
            auto: true,
            preventDefaultSwipeX: true
        });
});

jQuery(window).bind("exitBreakpoint641", function () {
    wuSliderControl = jQuery(wuSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});


jQuery(window).bind("enterBreakpoint641", function () {
    if (typeof(wuSliderControl) != "undefined")
        wuSliderControl.destroySlider();
});
