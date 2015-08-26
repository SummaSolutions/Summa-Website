(function () {

    var groupEach = 3;
    var slider;
    var parSliderSelector = ".partners-container .bxslider";

    function _readjustDomSlides() {
        var slides = jQuery(parSliderSelector + " .group-container:not(.bx-clone)");
        var parent = jQuery(parSliderSelector + " .group-container:not(.bx-clone)").parent();
        slides.detach();
        for (var i = 0; i < slides.length; i++) {
            parent.append(slides.children(i));
        }
    }

    function _adjustDomSlides() {

        var slides = jQuery(parSliderSelector + " .views-row:not(.bx-clone)");
        var parent = jQuery(parSliderSelector + " .views-row:not(.bx-clone)").parent();
        slides.detach();
        slides.removeAttr("style");

        for (var i = 0; i < slides.length / groupEach; i++) {
            var container = jQuery("<div></div>").addClass("group-container");
            container.append(slides.slice(i * groupEach, i * groupEach + groupEach));
            container.appendTo(parent);
        }

    }


    function _initSlider() {
        slider = jQuery(parSliderSelector).bxSlider({
            wrapperClass: 'bx-wrapper bx-wrapper-green',
            speed: 300,
            auto: true,
            preventDefaultSwipeX: true,
            pager: false
        });
    }

    function _reloadSlider() {
        slider.reloadSlider();
    }


    jQuery(document).ready(function () {
        if (jQuery("body").hasClass("breakpoint-641")) {
            _adjustDomSlides();
        }
        _initSlider();

        jQuery(window).bind("enterBreakpoint641", function () {
            _adjustDomSlides();
            _reloadSlider();
        });
        jQuery(window).bind("exitBreakpoint641", function () {
            _readjustDomSlides();
            _reloadSlider();
        });
    });


})();