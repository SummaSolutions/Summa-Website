var fcsSliderSelector = "#featured-case-studies-container .slider";


jQuery(document).ready(function () {
    jQuery(fcsSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});

