var clientsControler = {
    ITEMS_PER_PAGE_DESKTOP: 15,
    ITEMS_PER_PAGE_MOBILE: 9,
    ITEMS_PER_ROW_DESKTOP: 5,
    ITEMS_PER_ROW_MOBILE: 3,
    SELECTOR: ".clients-container",

    offset: 0,
    called: false,

    getItemsPerPage: function () {
        return itemsPerPage = (jQuery("body").hasClass("breakpoint-641") ? this.ITEMS_PER_PAGE_DESKTOP : this.ITEMS_PER_PAGE_MOBILE );
    },
    // Returns other page
    getMore: function () {
        var itemsPerPage = this.getItemsPerPage();
        var _this = this;
        this.getAjax(this.offset, itemsPerPage, "append", function () {
            _this.called = true;
            _this.offset += itemsPerPage;
        });
    },
    getAjax: function (_offset, itemsPerPage, type, callback) {

        var _this = this;
        jQuery.ajax({
            url: AJAX_URL_CLIENTS,
            data: "itemsPerPage=" + itemsPerPage + "&offset=" + _offset,
            type: 'GET',
            dataType: 'JSON',
            success: function (data) {
                if (type == "append")
                    jQuery(_this.SELECTOR).find(".view").append(data.html);
                else
                    jQuery(_this.SELECTOR).find(".view").html(data.html);

                _this.offset = itemsPerPage;

                _this.pad();

                if (data.end) {
                    jQuery(_this.SELECTOR).parent().find(".more-container").hide();
                }

                callback();
            }
        });
    },
    // Returns at least one page of items
    getInitial: function () {
        var currentItems = jQuery(this.SELECTOR).find(".views-row").length;
        var itemsPerPage = this.getItemsPerPage();
        // never loaded more items
        if (!this.called) {
            if (currentItems < itemsPerPage) {
                this.getAjax(0, itemsPerPage, "html", function () {
                });
            } else {
                // > =
                this.offset = itemsPerPage;

                if (currentItems > itemsPerPage) {
                    var toRemove = jQuery(this.SELECTOR).find(".views-row").slice(itemsPerPage - currentItems);
                    toRemove.find(".views-row-pad").remove();
                    // if remove a valid element (not a pad element)
                    if (toRemove) {
                        jQuery(this.SELECTOR).parent().find(".more-container").show();
                        toRemove.remove();
                    }
                }
            }
        }
        this.pad();
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
    jQuery(".clients-wrapper .more").click(function (e) {
            e.preventDefault();
            clientsControler.getMore();
        }
    );
    clientsControler.getInitial();
});

jQuery(window).bind("enterBreakpoint641", function () {
    clientsControler.getInitial();
});
jQuery(window).bind("exitBreakpoint641", function () {
    clientsControler.getInitial();
});