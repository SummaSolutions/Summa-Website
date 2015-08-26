var locSliderSelector = ".location-container .bxslider";
var locMapSelector = ".location-container .google-maps-container";
var locControl;

jQuery(window).load(function () {

    // Convert slides into maps
    var mapElement = jQuery(locMapSelector);
    // Map initialization
    var firstSlide = jQuery(".location-container .slide").eq(0);

    var latitude = firstSlide.data("latitude");
    var longitude = firstSlide.data("longitude");
    var zoom = firstSlide.data("zoom");

    locControl = jQuery(locSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        mode: 'fade',
        speed: 1500,
        pause: 7000,
        auto: true,
        preventDefaultSwipeX: true,
        autoHover: true,
        onSlideNext : function($slideElement){
            var lat = $slideElement.data("latitude");
            var lon = $slideElement.data("longitude");
            //jQuery(locMapSelector).data("map").panTo( new google.maps.LatLng( lat, lon ) );
            jQuery(locMapSelector).find('.map').fadeToggle();
        }
    });


    jQuery(".google-maps-container").hover( locControl.stopAuto, locControl.startAuto );
});
