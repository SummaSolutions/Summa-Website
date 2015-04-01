jQuery(document).ready(function () {

    jQuery("select").scombobox({ highlight: false, empty: true, invalidAsValue: true });

    jQuery(".scombobox").each(function () {
        jQuery(this).find("input.scombobox-display").attr("data-validation", jQuery(this).find("select").attr("data-validation"));
        jQuery(this).find("input.scombobox-display").attr("placeholder", jQuery(this).find("select").attr("placeholder"));
        jQuery(this).find("input.scombobox-display").attr("name", jQuery(this).find("select").attr("name"));
        jQuery(this).find("select").attr("name", "");
    });

    jQuery.validate({
        form: "#contact-form",
        showHelpOnFocus: false,
        addSuggestions: false,
        errorMessagePosition: "custom",
        validateOnBlur: false,
        errorMessageCustom: function (form, title, message, conf) {
        },
        onSuccess: function (form) {
            var action = form.attr("action");
            var method = form.attr("method");
            var data = form.serialize();
            var form = jQuery("#contact-form").animate({opacity: 0.25}, 1000);
            var parent = jQuery("#contact-form").parent();
            var msgOk = parent.find(".msg-ok");
            var msgError = parent.find(".msg-error");

            msgError.hide();
            msgOk.hide();

            jQuery.ajax({
                url: action,
                dataType: "json",
                data: data,
                type: method,
                success: function (data) {
                    form.fadeOut();
                    msgOk.fadeIn();
                }, error: function () {
                    form.animate({opacity: 1}, 1000);
                    msgError.fadeIn();
                }
            });
            return false;
        }
    });
});