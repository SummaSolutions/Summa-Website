jQuery(document).ready(function () {
    function _scroll(a, velocity) {
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
});