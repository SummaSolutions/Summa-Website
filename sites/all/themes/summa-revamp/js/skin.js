jQuery(document).ready(function () {
    jQuery(".menu-mobile a").click(function (e) {
        e.preventDefault();
        jQuery("#header-middle").slideToggle();
        var headElement = jQuery("#header");
        headElement.toggleClass("expanded");
    });
});