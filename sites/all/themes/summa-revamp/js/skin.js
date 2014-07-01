var headerSelector = "#header";
var headerMiddleSelector = "#header-middle";

jQuery(document).ready(function () {
    jQuery(".menu-mobile a").click(function (e) {
        e.preventDefault();
        jQuery(headerMiddleSelector).slideToggle();
        jQuery(headerSelector).toggleClass("expanded");
    });
});

jQuery(window).bind("enterBreakpoint641", function () {
    // Styles clean
    jQuery(headerSelector).removeClass("expanded");
    jQuery(headerMiddleSelector).show();
});



