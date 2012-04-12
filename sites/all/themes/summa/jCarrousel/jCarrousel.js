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
