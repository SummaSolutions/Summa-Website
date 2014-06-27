var headerElement;
var headerMiddleElement;

jQuery(document).ready(function () {
    headerElement = jQuery("#header");
    headerMiddleElement = jQuery("#header-middle")

    jQuery(".menu-mobile a").click(function (e) {
        e.preventDefault();
        headerMiddleElement.slideToggle();
        headerElement.toggleClass("expanded");
    });
});

jQuery(window).bind("enterBreakpoint641", function () {
    // Styles clean
    headerElement.removeClass("expanded");
    headerMiddleElement.show();
});



