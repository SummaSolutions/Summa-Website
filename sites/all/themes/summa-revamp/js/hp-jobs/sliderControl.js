var hpjSliderSelector = "#hp-jobs-container .slider";

jQuery(window).bind("enterBreakpoint641", function () {
    var glideApi = jQuery(hpjSliderSelector).data("api_glide");

    if (glideApi)
        glideApi.destroy();

});

jQuery(window).bind("exitBreakpoint641", function () {
    jQuery(hpjSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});