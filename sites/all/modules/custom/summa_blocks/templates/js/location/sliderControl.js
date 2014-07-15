var locSliderSelector = ".location-container .slider";
var locSliderApi;

jQuery(document).ready(function () {
    locSliderApi = jQuery(locSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container",
        afterTransition: function () {
            var domSlide = this.slides[locSliderApi.current() - 1];
            var background = jQuery(domSlide).data("background_class");
            jQuery(".location-container").find(".background-map." + background).addClass("visible");
        }
    }).data("api_glide");
});