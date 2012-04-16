/**
 * @file ajaxView.js
 *
 * Handles AJAX fetching of views, including filter submission and response.
 */
(function ($) {

/**
 * Attaches the AJAX behavior to Views exposed filter forms and key View links.
 */
Drupal.behaviors.ViewsAjaxView = {};
Drupal.behaviors.ViewsAjaxView.attach = function() {
  if (Drupal.settings && Drupal.settings.views && Drupal.settings.views.ajaxViews) {
    // Retrieve the path to use for views' ajax.
    var ajax_path = Drupal.settings.views.ajax_path;

    // If there are multiple views this might've ended up showing up multiple times.
    if (ajax_path.constructor.toString().indexOf("Array") != -1) {
      ajax_path = ajax_path[0];
    }

    $.each(Drupal.settings.views.ajaxViews, function(i, settings) {
      var view = '.view-dom-id-' + settings.view_dom_id;
      var element_settings = {
        url: ajax_path,
        submit: settings,
        setClick: true,
        event: 'click',
        selector: view,
        progress: { type: 'throbber' }
      };

      // Process exposed filter forms.
      $('form#views-exposed-form-' + settings.view_name.replace(/_/g, '-') + '-' + settings.view_display_id.replace(/_/g, '-'))
      .filter(':not(.views-processed)')
      .each(function () {
        var button = $('input[type=submit], input[type=image]', this);
        button = button[0];

        var ajax = new Drupal.ajax($(button).attr('id'), button, element_settings);
      })
      .addClass('views-processed')

      $(view).filter(':not(.views-processed)')
        // Don't attach to nested views. Doing so would attach multiple behaviors
        // to a given element.
        .filter(function() {
          // If there is at least one parent with a view class, this view
          // is nested (e.g., an attachment). Bail.
          return !$(this).parents('.view').size();
        })
        .each(function() {
          // Set a reference that will work in subsequent calls.
          var target = this;
          $(this)
            .addClass('views-processed')
            // Process pager, tablesort, and attachment summary links.
            .find('ul.pager > li > a, th.views-field a, .attachment .views-summary a')
            .each(function () {
              var viewData = {};
              // Construct an object using the settings defaults and then overriding
              // with data specific to the link.
              $.extend(
                viewData,
                settings,
                Drupal.Views.parseQueryString($(this).attr('href')),
                // Extract argument data from the URL.
                Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path)
              );

              // For anchor tags, these will go to the target of the anchor rather
              // than the usual location.
              $.extend(viewData, Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path));

              element_settings.submit = viewData;
              var ajax = new Drupal.ajax(false, this, element_settings);
            }); // .each function () {
      }); // $view.filter().each
    }); // .each Drupal.settings.views.ajaxViews
  } // if
};
})(jQuery);
;
/*!
 * jQuery UI Widget 1.8.5
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Widget
 */
(function( $, undefined ) {

// jQuery 1.4+
if ( $.cleanData ) {
	var _cleanData = $.cleanData;
	$.cleanData = function( elems ) {
		for ( var i = 0, elem; (elem = elems[i]) != null; i++ ) {
			$( elem ).triggerHandler( "remove" );
		}
		_cleanData( elems );
	};
} else {
	var _remove = $.fn.remove;
	$.fn.remove = function( selector, keepData ) {
		return this.each(function() {
			if ( !keepData ) {
				if ( !selector || $.filter( selector, [ this ] ).length ) {
					$( "*", this ).add( [ this ] ).each(function() {
						$( this ).triggerHandler( "remove" );
					});
				}
			}
			return _remove.call( $(this), selector, keepData );
		});
	};
}

$.widget = function( name, base, prototype ) {
	var namespace = name.split( "." )[ 0 ],
		fullName;
	name = name.split( "." )[ 1 ];
	fullName = namespace + "-" + name;

	if ( !prototype ) {
		prototype = base;
		base = $.Widget;
	}

	// create selector for plugin
	$.expr[ ":" ][ fullName ] = function( elem ) {
		return !!$.data( elem, name );
	};

	$[ namespace ] = $[ namespace ] || {};
	$[ namespace ][ name ] = function( options, element ) {
		// allow instantiation without initializing for simple inheritance
		if ( arguments.length ) {
			this._createWidget( options, element );
		}
	};

	var basePrototype = new base();
	// we need to make the options hash a property directly on the new instance
	// otherwise we'll modify the options hash on the prototype that we're
	// inheriting from
//	$.each( basePrototype, function( key, val ) {
//		if ( $.isPlainObject(val) ) {
//			basePrototype[ key ] = $.extend( {}, val );
//		}
//	});
	basePrototype.options = $.extend( true, {}, basePrototype.options );
	$[ namespace ][ name ].prototype = $.extend( true, basePrototype, {
		namespace: namespace,
		widgetName: name,
		widgetEventPrefix: $[ namespace ][ name ].prototype.widgetEventPrefix || name,
		widgetBaseClass: fullName
	}, prototype );

	$.widget.bridge( name, $[ namespace ][ name ] );
};

$.widget.bridge = function( name, object ) {
	$.fn[ name ] = function( options ) {
		var isMethodCall = typeof options === "string",
			args = Array.prototype.slice.call( arguments, 1 ),
			returnValue = this;

		// allow multiple hashes to be passed on init
		options = !isMethodCall && args.length ?
			$.extend.apply( null, [ true, options ].concat(args) ) :
			options;

		// prevent calls to internal methods
		if ( isMethodCall && options.substring( 0, 1 ) === "_" ) {
			return returnValue;
		}

		if ( isMethodCall ) {
			this.each(function() {
				var instance = $.data( this, name );
				if ( !instance ) {
					throw "cannot call methods on " + name + " prior to initialization; " +
						"attempted to call method '" + options + "'";
				}
				if ( !$.isFunction( instance[options] ) ) {
					throw "no such method '" + options + "' for " + name + " widget instance";
				}
				var methodValue = instance[ options ].apply( instance, args );
				if ( methodValue !== instance && methodValue !== undefined ) {
					returnValue = methodValue;
					return false;
				}
			});
		} else {
			this.each(function() {
				var instance = $.data( this, name );
				if ( instance ) {
					instance.option( options || {} )._init();
				} else {
					$.data( this, name, new object( options, this ) );
				}
			});
		}

		return returnValue;
	};
};

$.Widget = function( options, element ) {
	// allow instantiation without initializing for simple inheritance
	if ( arguments.length ) {
		this._createWidget( options, element );
	}
};

$.Widget.prototype = {
	widgetName: "widget",
	widgetEventPrefix: "",
	options: {
		disabled: false
	},
	_createWidget: function( options, element ) {
		// $.widget.bridge stores the plugin instance, but we do it anyway
		// so that it's stored even before the _create function runs
		$.data( element, this.widgetName, this );
		this.element = $( element );
		this.options = $.extend( true, {},
			this.options,
			$.metadata && $.metadata.get( element )[ this.widgetName ],
			options );

		var self = this;
		this.element.bind( "remove." + this.widgetName, function() {
			self.destroy();
		});

		this._create();
		this._init();
	},
	_create: function() {},
	_init: function() {},

	destroy: function() {
		this.element
			.unbind( "." + this.widgetName )
			.removeData( this.widgetName );
		this.widget()
			.unbind( "." + this.widgetName )
			.removeAttr( "aria-disabled" )
			.removeClass(
				this.widgetBaseClass + "-disabled " +
				"ui-state-disabled" );
	},

	widget: function() {
		return this.element;
	},

	option: function( key, value ) {
		var options = key,
			self = this;

		if ( arguments.length === 0 ) {
			// don't return a reference to the internal hash
			return $.extend( {}, self.options );
		}

		if  (typeof key === "string" ) {
			if ( value === undefined ) {
				return this.options[ key ];
			}
			options = {};
			options[ key ] = value;
		}

		$.each( options, function( key, value ) {
			self._setOption( key, value );
		});

		return self;
	},
	_setOption: function( key, value ) {
		this.options[ key ] = value;

		if ( key === "disabled" ) {
			this.widget()
				[ value ? "addClass" : "removeClass"](
					this.widgetBaseClass + "-disabled" + " " +
					"ui-state-disabled" )
				.attr( "aria-disabled", value );
		}

		return this;
	},

	enable: function() {
		return this._setOption( "disabled", false );
	},
	disable: function() {
		return this._setOption( "disabled", true );
	},

	_trigger: function( type, event, data ) {
		var callback = this.options[ type ];

		event = $.Event( event );
		event.type = ( type === this.widgetEventPrefix ?
			type :
			this.widgetEventPrefix + type ).toLowerCase();
		data = data || {};

		// copy original event properties over to the new event
		// this would happen if we could call $.event.fix instead of $.Event
		// but we don't have a way to force an event to be fixed multiple times
		if ( event.originalEvent ) {
			for ( var i = $.event.props.length, prop; i; ) {
				prop = $.event.props[ --i ];
				event[ prop ] = event.originalEvent[ prop ];
			}
		}

		this.element.trigger( event, data );

		return !( $.isFunction(callback) &&
			callback.call( this.element[0], event, data ) === false ||
			event.isDefaultPrevented() );
	}
};

})( jQuery );
;
/*
Plugin desarrollado por Roque Terrani
*/
  jQuery.widget("ui.jCarrousel", {
    // default options
    options: {
      easing: 'linear',
      duration:"slow",
      playInterval:2000,
      playDirection:"right",
      type:"horizontal",
      viewItems:1
    },
    _create: function(){
      var
        self=this,
        element=this.element;
      var slidesContainer=jQuery("<div></div>").
        addClass("slidesContainer").
        height(element.height()).
        width(element.width()).
        html(element.html());
      this.config=new Object();
      element.html(slidesContainer);
      this.config.actualSlide=0;
      this.config.slideWidth=slidesContainer.children(":first").outerWidth();
      this.config.slideHeight=slidesContainer.children(":first").outerHeight();
      this.config.items=slidesContainer.children().size();
      if(this.options.type=="grid" && (this.options.width || this.options.height)){

      }else if(this.options.type=="vertical"){
        if(this.options.viewItems==1){
          slidesContainer.height(this.config.slideHeight*(this.config.items+1));
        }else{
          slidesContainer.height(this.config.slideHeight*(this.config.items*this.options.viewItems));
        }
      }else{
        if(this.options.viewItems==1){
          slidesContainer.width(this.config.slideWidth*(this.config.items+1));
        }else{
          slidesContainer.width(this.config.slideWidth*(this.config.items*this.options.viewItems));
        }
      }
      if(this.options.viewItems==1){
        slidesContainer.
          append(slidesContainer.children(":first").clone());
      }else{
        var originalContent=slidesContainer.html();
        for(var i=1;i<this.options.viewItems;i++){
           slidesContainer.html(slidesContainer.html()+originalContent);
        }
      }
      slidesContainer.children().css("float","left");
      this.options.configured.apply(this.element.children(".slidesContainer"));
    },
    nextSlide:function(options){
      this.goToSlide(this.config.actualSlide+1,options);
    },
    prevSlide:function(options){
      this.goToSlide(this.config.actualSlide-1,options);
    },
    goToSlide:function(slide,options,mode){
      var self=this;
      slidesContainer=this.element.children(".slidesContainer");
      slidesContainer.queue(function(next){
        var actualOptions=new Object();
        jQuery.extend(actualOptions,self.options);
        if (options){
          jQuery.extend(actualOptions,options);
        }
        options=actualOptions;
        if(slide<0){
          if(self.options.type=="vertical"){
            slidesContainer.css("margin-top",-(self.config.items*self.config.slideHeight));
          }else{
            slidesContainer.css("margin-left",-(self.config.items*self.config.slideWidth));
          }
          self.config.actualSlide=self.config.items;
          slide=self.config.items-1;
        }else if(slide>self.config.items){
          if(self.options.type=="vertical"){
            slidesContainer.css("margin-top",0);
          }else{
            slidesContainer.css("margin-left",0);
          }
          self.config.actualSlide=0;
          slide=1;
        }
        self.config.actualSlide=slide;
        if(self.options.type=="vertical"){
          var properties={
            marginTop:-(slide*self.config.slideHeight)
          };
        }else{
          var properties={
             marginLeft:-(slide*self.config.slideWidth)
          };
        }
        slidesContainer.animate(properties,{
          duration:options.duration,
          easing:options.easing,
          step:options.step,
          complete:function(){
            options.complete.apply(slidesContainer);
          }
        });
        next();
      });
    },
    play:function(options){
      var self=this;
      if (options){
        options=jQuery.extend(self.options,options);
      }else{
        options=this.options;
      }
      if(options.playDirection=="left"){
        this.playTimer=setInterval(function(){
          this.prevSlide(options);
        },options.playInterval);
      }else if(options.playDirection=="right"){
        this.playTimer=setInterval(function(){
          self.nextSlide(options);
        },options.playInterval);
      }
    },
    stop:function(){
      clearInterval(this.playTimer);
    },
    getSlideN: function() {
      if(this.config.actualSlide>=this.config.items){
        return 0
      }
      return this.config.actualSlide;
    },
    length: function() {
      return this.config.items;
    },
    destroy: function() {
      jQuery.Widget.prototype.destroy.apply(this, arguments); // default destroy
      // now do other stuff particular to this widget
    },
    _setOption: function(key, value) {
      jQuery.Widget.prototype._setOption.apply(this, arguments);
    }
  });
;
jQuery(document).ready(function(){
  jQuery("#partnersCarrousel").jCarrousel({
    viewItems:3,
    complete:function(){
      var slide=jQuery("#partnersCarrousel").jCarrousel("getSlideN")+1;
      var slidesLength=jQuery("#partnersCarrousel").jCarrousel("length");
      if(slide>slidesLength-1){
        slide=0;
      }
      jQuery("#partnersInfoBoxContent").
        empty().
        append(jQuery(this).children().eq(slide).find(".views-field-title").clone()).
        append(jQuery(this).children().eq(slide).find(".views-field-entity-id-1").clone());
        jQuery("#partnersInfoBox").fadeToggle();
    },
    configured:function(){
      jQuery("#partnersInfoBoxContent").
        empty().
        append(jQuery(this).children().eq(1).find(".views-field-title").clone()).
        append(jQuery(this).children().eq(1).find(".views-field-entity-id-1").clone());
    }
  });
  jQuery("#nextSlideArrow").click(function(){
    jQuery("#partnersInfoBox").fadeToggle();
    jQuery("#partnersCarrousel").jCarrousel("nextSlide");
  });
  jQuery("#prevSlideArrow").click(function(){
    jQuery("#partnersInfoBox").fadeToggle();
    jQuery("#partnersCarrousel").jCarrousel("prevSlide");
  });
  jQuery("#clientsCarrousel").jCarrousel({
    viewItems:3,
    complete:function(){
      var slide=jQuery("#clientsCarrousel").jCarrousel("getSlideN")+1;
      var slidesLength=jQuery("#clientsCarrousel").jCarrousel("length");
      if(slide>slidesLength-1){
        slide=0;
      }
      jQuery("#clientsInfoBoxContent").
        empty().
        append(jQuery(this).children().eq(slide).find(".views-field-title").clone()).
        append(jQuery(this).children().eq(slide).find(".views-field-entity-id-1").clone());
        jQuery("#clientsInfoBox").fadeToggle();
    },
    configured:function(){
      jQuery("#clientsInfoBoxContent").
        empty().
        append(jQuery(this).children().eq(1).find(".views-field-title").clone()).
        append(jQuery(this).children().eq(1).find(".views-field-entity-id-1").clone());
    }
  });
  jQuery("#nextSlideArrow").click(function(){
    jQuery("#clientsInfoBox").fadeToggle();
    jQuery("#clientsCarrousel").jCarrousel("nextSlide");
  });
  jQuery("#prevSlideArrow").click(function(){
    jQuery("#clientsInfoBox").fadeToggle();
    jQuery("#clientsCarrousel").jCarrousel("prevSlide");
  });
});;
(function ($) {

$(document).ready(function() {

  // Accepts a string; returns the string with regex metacharacters escaped. The returned string
  // can safely be used at any point within a regex to match the provided literal string. Escaped
  // characters are [ ] { } ( ) * + ? - . , \ ^ $ # and whitespace. The character | is excluded
  // in this function as it's used to separate the domains names.
  RegExp.escapeDomains = function(text) {
    return (text) ? text.replace(/[-[\]{}()*+?.,\\^$#\s]/g, "\\$&") : '';
  }

  // Attach onclick event to document only and catch clicks on all elements.
  $(document.body).click(function(event) {
    // Catch the closest surrounding link of a clicked element.
    $(event.target).closest("a,area").each(function() {

      var ga = Drupal.settings.googleanalytics;
      // Expression to check for absolute internal links.
      var isInternal = new RegExp("^(https?):\/\/" + window.location.host, "i");
      // Expression to check for special links like gotwo.module /go/* links.
      var isInternalSpecial = new RegExp("(\/go\/.*)$", "i");
      // Expression to check for download links.
      var isDownload = new RegExp("\\.(" + ga.trackDownloadExtensions + ")$", "i");
      // Expression to check for the sites cross domains.
      var isCrossDomain = new RegExp("^(https?|ftp|news|nntp|telnet|irc|ssh|sftp|webcal):\/\/.*(" + RegExp.escapeDomains(ga.trackCrossDomains) + ")", "i");

      // Is the clicked URL internal?
      if (isInternal.test(this.href)) {
        // Is download tracking activated and the file extension configured for download tracking?
        if (ga.trackDownload && isDownload.test(this.href)) {
          // Download link clicked.
          var extension = isDownload.exec(this.href);
          _gaq.push(["_trackEvent", "Downloads", extension[1].toUpperCase(), this.href.replace(isInternal, '')]);
        }
        else if (isInternalSpecial.test(this.href)) {
          // Keep the internal URL for Google Analytics website overlay intact.
          _gaq.push(["_trackPageview", this.href.replace(isInternal, '')]);
        }
      }
      else {
        if (ga.trackMailto && $(this).is("a[href^=mailto:],area[href^=mailto:]")) {
          // Mailto link clicked.
          _gaq.push(["_trackEvent", "Mails", "Click", this.href.substring(7)]);
        }
        else if (ga.trackOutbound && this.href) {
          if (ga.trackDomainMode == 2 && isCrossDomain.test(this.href)) {
            // Top-level cross domain clicked. document.location is handled by _link internally.
            _gaq.push(["_link", this.href]);
          }
          else if (ga.trackOutboundAsPageview) {
            // Track all external links as page views after URL cleanup.
            // Currently required, if click should be tracked as goal.
            _gaq.push(["_trackPageview", '/outbound/' + this.href.replace(/^(https?|ftp|news|nntp|telnet|irc|ssh|sftp|webcal):\/\//i, '').split('/').join('--')]);
          }
          else {
            // External link clicked.
            _gaq.push(["_trackEvent", "Outbound links", "Click", this.href]);
          }
        }
      }
    });
  });
});

})(jQuery);
;
