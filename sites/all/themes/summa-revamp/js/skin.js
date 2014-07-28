var headerSelector = "#header";
var headerMiddleSelector = "#header-middle";

jQuery(document).ready(function () {
    jQuery(".menu-mobile a").click(function (e) {
        e.preventDefault();
        jQuery(headerMiddleSelector).slideToggle();
        jQuery(headerSelector).toggleClass("expanded");
    });

    if (!jQuery("body").hasClass("breakpoint-641"))
        jQuery("meta[name=viewport]").attr("content", "width=640");
});


jQuery(window).resize(function () {
    var width = screen.width;

    if (width < 641)
        jQuery("meta[name=viewport]").attr("content", "width=640");
    else
        jQuery("meta[name=viewport]").attr("content", "width=device-width");
});

jQuery(window).bind("enterBreakpoint641", function () {
    // Styles clean
    jQuery(headerSelector).removeClass("expanded");
    jQuery(headerMiddleSelector).show();
});