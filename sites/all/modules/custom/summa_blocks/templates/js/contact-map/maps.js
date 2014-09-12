jQuery(document).ready( function(){

    jQuery(".contact-map-container .map").each(function(){
       var _this = jQuery(this);

        var latitude = _this.data("latitude");
        var longitude = _this.data("longitude");
        var zoom = _this.data("zoom");

        var latlng = new google.maps.LatLng( latitude, longitude );

        var mapOptions = {
            center: latlng,
            zoom: zoom,
            mapTypeId: google.maps.MapTypeId.ROADMAP,
            mapTypeControl : false,
            maxZoom : 17,
            zoomControl: true,
            zoomControlOptions: {
                style: google.maps.ZoomControlStyle.SMALL
            }

        };
        var map =  new google.maps.Map( this, mapOptions );

        var marker = new google.maps.Marker({
            position: latlng,
            map: map
        });


        _this.data("map", map);
    });
});