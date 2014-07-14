var lpSliderSelector = "#latest-posts-container .slider";

jQuery(window).bind("enterBreakpoint641", function () {
    var glideApi = jQuery(lpSliderSelector).data("api_glide");

    if (glideApi)
        glideApi.destroy();
});

jQuery(window).bind("exitBreakpoint641", function () {
    jQuery(lpSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});