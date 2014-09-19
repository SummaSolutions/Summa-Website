var hbSliderSelector = "#header-bottom .bxslider";
var hbSliderControl;

jQuery(window).load(function () {
    var settings = {
        wrapperClass: 'bx-wrapper',
        controls: false,
        speed: 300,
        auto: true,
        preventDefaultSwipeX: true
    };
    if (!jQuery("body").hasClass("breakpoint-641"))
        settings.pager = false;

    hbSliderControl = jQuery(hbSliderSelector).bxSlider(settings);
});

jQuery(window).bind("exitBreakpoint641", function () {
    var settings = {
        wrapperClass: 'bx-wrapper',
        controls: false,
        auto: true,
        pager: false,
        speed: 300,
        preventDefaultSwipeX: true
    };
    if (typeof (hbSliderControl) != "undefined")
        hbSliderControl.reloadSlider(settings);
});


jQuery(window).bind("enterBreakpoint641", function () {
    var settings = {
        wrapperClass: 'bx-wrapper',
        controls: false,
        auto: true,
        speed: 300,
        preventDefaultSwipeX: true
    };
    if (typeof (hbSliderControl) != "undefined")
        hbSliderControl.reloadSlider(settings);
});
