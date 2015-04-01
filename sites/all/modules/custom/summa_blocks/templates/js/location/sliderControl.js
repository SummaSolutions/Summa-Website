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

    var latlng = new google.maps.LatLng( latitude, longitude );

    var mapOptions = {
        center: latlng,
        zoom: zoom,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        mapTypeControl : false,
        maxZoom : 19,
        zoomControl: true,
        zoomControlOptions: {
            style: google.maps.ZoomControlStyle.SMALL
        }
    };

    var map =  new google.maps.Map( mapElement.get(0), mapOptions );
    mapElement.data("map", map);

    // Markers for next slides
    jQuery(".location-container .slide").each( function(){
        var latlng = new google.maps.LatLng( jQuery(this).data("latitude"), jQuery(this).data("longitude") );

        var marker = new google.maps.Marker({
            position: latlng,
            map: map
        });
    });


    locControl = jQuery(locSliderSelector).bxSlider({
        wrapperClass: 'bx-wrapper bx-wrapper-green',
        controls: false,
        mode: 'fade',
        speed: 500,
        auto: true,
        preventDefaultSwipeX: true,
        autoHover: true,
        onSlideAfter : function($slideElement){
            var lat = $slideElement.data("latitude");
            var lon = $slideElement.data("longitude");
            jQuery(locMapSelector).data("map").panTo( new google.maps.LatLng( lat, lon ) );
        }
    });


    jQuery(".google-maps-container").hover( locControl.stopAuto, locControl.startAuto );
});
