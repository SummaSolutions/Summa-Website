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

// Go to Top button
jQuery(window).load(function () {
    function _scroll(a, velocity) {
        debugger;
        var target = jQuery(a.hash);
        target = target.length ? target : jQuery('[name=' + a.hash.slice(1) + ']');
        if (target.length) {
            jQuery('html,body').animate({
                scrollTop: target.offset().top
            }, velocity, "easeOutQuint");
            return false;
        }
    }

    jQuery("a.anchor-next").click(function (e) {
        e.preventDefault();
        return _scroll(this, 1000);
    });

    jQuery("a.anchor-prev").click(function (e) {
        e.preventDefault();
        return _scroll(this, 1000);
    });

    if( location.hash != "" )
        _scroll( jQuery("<a/>").attr("href", location.hash).get(0) , 1000);
});


jQuery(window).scroll(function () {
    if (jQuery(jQuery.browser.webkit ? "body" : "html").scrollTop() > 285)
        jQuery(".fixed-anchor").fadeIn("fast");
    else
        jQuery(".fixed-anchor").fadeOut("fast");
});
