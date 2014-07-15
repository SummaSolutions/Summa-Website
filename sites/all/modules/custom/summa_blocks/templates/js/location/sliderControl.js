var locSliderSelector = ".location-container .slider";
var locSliderApi;

jQuery(document).ready(function () {
    locSliderApi = jQuery(locSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container",
        afterTransition: function () {
            var domSlide = this.slides[locSliderApi.current() - 1];
            var backgroundClass = jQuery(domSlide).data("background_class");

            var active = jQuery(".location-container").find(".background-map.active");
            var next = jQuery(".location-container").find("." + backgroundClass);

            next.css('z-index', 2);
            active.fadeOut(500, function () {
                active.css('z-index', 1).show().removeClass('active');
                next.css('z-index', 3).addClass('active');
            });
        }
    }).data("api_glide");
});
