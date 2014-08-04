jQuery(document).ready(function () {
    jQuery(".team-container .views-field-uid").hover(
        function () {
            jQuery(this).find(".position-container").slideDown({
                duration: 500,
                easing: "easeOutBounce",
                start: function () {
                    jQuery(this).css("display", "table");
                }
            });
        }, function () {
            jQuery(this).find(".position-container").slideUp({
                duration: 100,
                easing: "linear"
            });
        });
});