var wuSliderSelector = ".pane-summa-blocks-why-us .slider";

jQuery(window).bind("enterBreakpoint641", function () {
    var glideApi = jQuery(wuSliderSelector).data("api_glide");

    if (glideApi)
        glideApi.destroy();
});

jQuery(window).bind("exitBreakpoint641", function () {
    jQuery(wuSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});


jQuery(document).ready(function () {

    if (!jQuery("body").hasClass("breakpoint-641"))
        jQuery(wuSliderSelector).glide({
            arrows: false,
            navigation: true,
            navigationClass: "navigation-container"
        });
})