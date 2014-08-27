jQuery(document).ready(function () {

    jQuery(".row-description .pane-content").dotdotdot({
        watch: true,
        after: ".anchor-next"
    });


    var target = ".panels-flexible-region-canvas-services-center";
    var source = ".field-name-field-image-background img";

    if (jQuery(source).length > 0) {
        var backgroundImage = jQuery(source).attr("src");

        jQuery(target).css("background-image", "url(" + backgroundImage + ")").css("background-repeat", "no-repeat").css("background-position", "center bottom");
    }
});