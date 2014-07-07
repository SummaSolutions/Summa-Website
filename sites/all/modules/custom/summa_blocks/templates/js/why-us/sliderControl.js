var wuSliderSelector = ".pane-summa-blocks-why-us .slider";
var wuOriginalHtml;

jQuery(document).ready(function () {
    wuOriginalHtml = jQuery(wuSliderSelector).html();
});

jQuery(window).bind("enterBreakpoint641", function () {
    // Destroying glide
    jQuery(wuSliderSelector).html(wuOriginalHtml);
});

jQuery(window).bind("exitBreakpoint641", function () {
    jQuery(wuSliderSelector).glide({
        arrows: false,
        navigation: true,
        navigationClass: "navigation-container"
    });
});