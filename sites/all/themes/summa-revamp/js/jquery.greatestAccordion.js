/**
 * greatestAccordion
 *
 * @projectDescription
 * greatestview vertical accordion
 *
 * Turnes a simple ul-list or similar into a vertical accordion.
 * Almost completely DOM independent, perfect for complex CMS markup.
 * Multiple nesting possible.
 *
 * This plugin is easy to handle, very lightweight and CSS independent. Every kind of styling
 * remains in your control with your CSS files.
 * If you need additional styling, this script provides a class, which is applied to
 * expanded elements: gv-accordion-active. With this class you can handle additional
 * animations of arrows or background replacements. Furthermore you can attach this class
 * to any list items, which should appear expanded on first load.
 *
 * For making list items collapsed via CSS on first load, I recommend implementing a
 * javascript function to attach a body class like .js-enabled. That way negative effects
 * on SEO can be prevented.
 *
 * You can apply it to very different kinds of HTML structure. However not every possible
 * structure can be tested, so this is what a preferred way may look like:
 *
 * ul/ol (where the script is attached)
 * |- li
 * |-- hx title_class
 * |-- div body_class
 * |-- ul/ol (optional nested child accordion, attach the script here a second time)
 * |---- li
 * |------ hy children_title_class
 * |------ div children_body_class
 *
 * Please note:
 * 1) Use unique body selectors when using nested accordions to prevent interferences!
 * 2) title_selector and body_selector must be siblings on the same DOM level
 *
 * Tested with: IE8+, Chrome, Firefox, Opera, jQuery 1.7.2
 *
 * @autor Kim-Christian Meyer info@greatestview.de, greatestview.de
 * @modified 2012-07-30
 * @version 1.0
 */
;
(function ($, window, document, undefined) {
    "use strict";

    // constructor
    function GreatestAccordion(element, options) {

        this.element = element;
        this.$element = $(element);

        // override default options with given settings
        this.options = $.extend({}, $.fn.greatestAccordion.defaultSettings, options);

        // check if required parameters are set
        if (this.options.li_selector === undefined) {
            throw 'Missing required parameter li_selector.';
        }
        if (this.options.title_selector === undefined) {
            throw 'Missing required parameter title_selector.';
        }
        if (this.options.body_selector === undefined) {
            throw 'Missing required parameter body_selector.';
        }
    }

    // class name to be attached to expanded list items
    GreatestAccordion.ACC_ACTIVE_CLASS = 'gv-accordion-active';

    GreatestAccordion.prototype.init = function () {
        // reference to itself for use in jQuery functions
        var _this = this;

        this.$element
            // init visibility of items, if not already done via CSS
            .find(_this.options.li_selector)
            .filter(':not(.' + GreatestAccordion.ACC_ACTIVE_CLASS + ')')
            .find(_this.options.body_selector)
            .css('display', 'none')
            .end()
            .end()
            .filter('.' + GreatestAccordion.ACC_ACTIVE_CLASS)
            .find(_this.options.body_selector)
            // bugfix enables animation if item is visible on load
            .css('display', 'block')
            .end()
            .end()
            .end()
            // add click actions
            .find(_this.options.title_selector)
            .click(function (e) {
                e.preventDefault();
                var $li = $(this).closest(_this.options.li_selector);
                var $body = $(this).siblings(_this.options.body_selector);

                // list item already expanded?
                if ($li.hasClass(GreatestAccordion.ACC_ACTIVE_CLASS)) {
                    // slide up this and possible child elements
                    _this.collapse($body);
                }
                else {
                    if (_this.options.single_mode === true) {
                        // slide up all other categories
                        _this.collapse(
                            $li
                                .siblings('.' + GreatestAccordion.ACC_ACTIVE_CLASS)
                                .find(_this.options.body_selector)
                        );
                    }

                    // slide down
                    $body.slideDown(_this.options.animation_speed);
                    $li.addClass(GreatestAccordion.ACC_ACTIVE_CLASS);
                }
            });
    }


    /**
     * Collapses given element and child elements, if available and wished by
     * initialising with options.
     *
     * @param {Object} $collapse_body jQuery objects of body element[s],
     *                 which should be collapsed
     */
    GreatestAccordion.prototype.collapse = function ($collapse_body) {
        var _this = this;

        /* collapse children bodies, if wished and available
         (children_stay_open === false) */
        if (_this.options.children_li_selector !== undefined &&
            _this.options.children_body_selector !== undefined &&
            _this.options.children_stay_open === false) {
            $collapse_body
                // slide up child list body element
                .find(_this.options.children_body_selector)
                .slideUp(_this.options.animation_speed)
                .end()
                .find(_this.options.children_li_selector)
                .removeClass(GreatestAccordion.ACC_ACTIVE_CLASS);
        }

        // collapse elements and remove internal toggle class
        $collapse_body.each(function () {
            // slideUp only works with visible elements
            if ($(this).is(':visible')) {
                $(this).slideUp(_this.options.animation_speed);
            }
            else {
                $(this).hide();
            }
            // remove class from parent li element
            $(this)
                .closest(_this.options.li_selector)
                .removeClass(GreatestAccordion.ACC_ACTIVE_CLASS);
        });
    }

    // init jQuery plugin
    $.fn.greatestAccordion = function (options) {
        return this.each(function () {
            new GreatestAccordion(this, options).init();
        });
    };

    // default settings
    $.fn.greatestAccordion.defaultSettings = {
        /* html element and/or css class name (including leading dot) of the
         accordion list item, e.g. 'li.mylist' or 'li' (jQuery syntax) */
        li_selector: undefined,

        /* html element and/or css class name (including
         leading dot) of the accordion title to click on (jQuery syntax) */
        title_selector: undefined,

        /* html element and/or css class name (including leading dot) of body to be
         toggled (jQuery syntax) */
        body_selector: undefined,

        /* jquery animation speed, e.g. 'fast', 'slow', 'normal, 2000 (milliseconds) */
        animation_speed: 'normal',

        /* true, if there should be only one list item visible at once, false, if
         it should be possible to expand multiple items */
        single_mode: false,

        /* true, if child items should stay expanded in the hidden state, if its
         parent collapses */
        children_stay_open: true,

        /* html selector similar to li_selector for child accordions, if available */
        children_li_selector: undefined,

        /* html selector similar to body_selector for child accordions, if available */
        children_body_selector: undefined
    };

})(jQuery, window, document);
