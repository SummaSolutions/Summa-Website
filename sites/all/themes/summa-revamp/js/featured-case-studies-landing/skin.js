var csController = {

    SELECTOR: ".case-studies-container",
    offset: 6,

    getItemsPerPage: function () {
        return 6;
    },
    // Returns other page
    getMore: function () {
        var itemsPerPage = this.getItemsPerPage();
        var _this = this;
        this.getAjax(this.offset, itemsPerPage);
    },
    getAjax: function (_offset, itemsPerPage ) {
        var _this = this;
        jQuery.ajax({
            url: AJAX_URL_CASE_STUDIES,
            data: "itemsPerPage=" + itemsPerPage + "&offset=" + _offset,
            type: 'GET',
            dataType: 'JSON',
            success: function (data) {
                jQuery(_this.SELECTOR).append(data.html);

                _this.offset += itemsPerPage;

                _this.pad();

                if (data.end)
                    jQuery(_this.SELECTOR).parent().find(".see-more").hide();
            }
        });
    },
    pad: function () {
        jQuery(this.SELECTOR).find(".views-row-pad").remove();
        var itemsPerRow = (jQuery("body").hasClass("breakpoint-641") ? this.ITEMS_PER_ROW_DESKTOP : this.ITEMS_PER_ROW_MOBILE );
        var currentItems = jQuery(this.SELECTOR).find(".views-row").length;

        var diff = (itemsPerRow - (currentItems % itemsPerRow) ) % itemsPerRow;

        for (var i = 0; i < diff; i++)
            jQuery(this.SELECTOR).append('<div class="views-row views-row-pad"><div class="views-field views-field-field-picture"><div class="field-content"></div></div></div>');

    }
};

jQuery(document).ready(function () {
    jQuery(".case-studies-grid-wrapper .see-more").click(function (e) {
            e.preventDefault();
            csController.getMore();
        }
    );

    jQuery(".case-studies-grid-wrapper .views-field-body").dotdotdot({watch:true});

    jQuery(".case-studies-grid-wrapper .views-row").hover(
        function(){
            var a = jQuery(this).find(".views-field-title a");
            a.data("saved_html", a.html() );
            a.html("READ MORE");
        }
        ,
        function(){
            var a = jQuery(this).find(".views-field-title a");
            a.html(a.data("saved_html") );
        }
    );

});
