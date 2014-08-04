//(function () {

var groupEachMobile = 3;
    var groupEachTablet = 5;
    var slider;
    var teamSliderSelector = ".team-container .bxslider";


    function _readjustDomSlides() {
        var slides = jQuery(teamSliderSelector + " .group-container:not(.bx-clone)");
        var parent = jQuery(teamSliderSelector + " .group-container:not(.bx-clone)").parent();
        slides.detach();
        for (var i = 0; i < slides.length; i++) {
            parent.append(slides.children(i));
        }
    }

    function _adjustDomSlides(groupEach) {

        var slides = jQuery(teamSliderSelector + " > .views-row");
        var parent = jQuery(teamSliderSelector + " > .views-row").parent();
        slides.detach();
        slides.removeAttr("style");

        for (var i = 0; i < slides.length / groupEach; i++) {
            var container = jQuery("<div></div>").addClass("group-container");
            container.append(slides.slice(i * groupEach, i * groupEach + groupEach));
            container.appendTo(parent);
        }

    }


    function _initSlider() {
        slider = jQuery(teamSliderSelector).bxSlider({
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
            _adjustDomSlides(groupEachTablet);
        } else {
            _adjustDomSlides(groupEachMobile);
        }
        _initSlider();

        jQuery(window).bind("enterBreakpoint641", function () {
            _readjustDomSlides();
            _adjustDomSlides(groupEachTablet);
            _reloadSlider();
        });
        jQuery(window).bind("exitBreakpoint641", function () {
            _readjustDomSlides();
            _adjustDomSlides(groupEachMobile);
            _reloadSlider();
        });
    });


//})();