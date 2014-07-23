var cerSliderSelector = "#certifieds-container .slider";


jQuery(window).bind("enterBreakpoint641", function () {
    var glideApi = jQuery(cerSliderSelector).data("api_glide");

    if (glideApi)
        glideApi.destroy();

});

jQuery(document).ready(function () {

    if (!jQuery("body").hasClass("breakpoint-641"))
        jQuery(cerSliderSelector).glide({
            arrows: false,
            navigation: true,
            navigationClass: "navigation-container"
        });
})

jQuery(window).bind("exitBreakpoint641", function () {
    jQuery(cerSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});