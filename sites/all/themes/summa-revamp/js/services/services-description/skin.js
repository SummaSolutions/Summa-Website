jQuery(document).ready(function () {
    jQuery(".row-description .pane-content").dotdotdot({
        watch: true,
        after: ".anchor-next"
    });
    jQuery(".row-description .region-description-container .pane-content .field").dotdotdot({ watch: true });
})