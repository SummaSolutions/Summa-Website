jQuery(document).ready(function () {
    var target = ".panels-flexible-region-canvas-services-center";
    var source = ".field-name-field-image-background img";

    var backgroundImage = jQuery(source).attr("src");

    jQuery(target).css("background", "url(" + backgroundImage + ") no-repeat center bottom");
});