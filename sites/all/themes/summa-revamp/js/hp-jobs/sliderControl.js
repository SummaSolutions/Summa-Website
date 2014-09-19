var hpjSliderSelector = "#hp-jobs-container .bxslider";
var hpSliderControl;


jQuery(window).load(function () {
    if (!jQuery("body").hasClass("breakpoint-641"))
        hpSliderControl = jQuery(hpjSliderSelector).bxSlider({
            wrapperClass: 'bx-wrapper',
            controls: false,
            speed: 300,
            auto: true,
            preventDefaultSwipeX: true
        });
})

jQuery(window).bind("exitBreakpoint641", function () {
    hpSliderControl = jQuery(hpjSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    });
});


jQuery(window).bind("enterBreakpoint641", function () {
    if (typeof(hpSliderControl) != "undefined")
        hpSliderControl.destroySlider();
});
