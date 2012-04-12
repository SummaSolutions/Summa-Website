jQuery.widget("ui.jCarrousel", {
	// default options
	options: {
		easing: 'linear',
		duration:'slow',
		playInterval:2000,
		playDirection:"right"
	},
	_create: function(){
		var 
			self=this,
			element=this.element;
		var slidesContainer=jQuery("<div></div>").
			addClass("slidesContainer").
			height(element.height()).
			html(element.html());
		this.config=new Object();
		element.html(slidesContainer);
		this.config.actualSlide=0;
		this.config.slideWidth=slidesContainer.children(":first").outerWidth();
		this.config.items=slidesContainer.children().size();
		slidesContainer.
			append(slidesContainer.children(":first").clone()).
			width(this.config.slideWidth*(this.config.items+1));
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
				slidesContainer.css("margin-left",-(self.config.items*self.config.slideWidth));
				self.config.actualSlide=self.config.items;
				slide=self.config.items-1;
			}else if(slide>self.config.items){
				slidesContainer.css("margin-left",0);
				self.config.actualSlide=0;
				slide=1;
			}
			self.config.actualSlide=slide;
			slidesContainer.animate({
				marginLeft:-(slide*self.config.slideWidth)
			},{
				duration:options.duration,
				easing:options.easing,
				step:options.step,
				complete:options.complete
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
	_doSomething: function() {
	// internal functions should be named with a leading underscore
	// manipulate the widget
	},
	destroy: function() {
		jQuery.Widget.prototype.destroy.apply(this, arguments); // default destroy
		// now do other stuff particular to this widget
	},
	_setOption: function(key, value) {
		jQuery.Widget.prototype._setOption.apply(this, arguments);
	}
});