jQuery(document).ready(function(){
  jQuery("#header-tweets-cage").css("display","none");

  jQuery("#blog-suckerfish").click(function(e) {
    e.preventDefault();
    jQuery("#header-categories-blog").slideToggle("slow");
    return false;
  });
  jQuery("#header-categories-blog").mouseup(function() {
    return false
  });
  jQuery(document).mouseup(function(e){
    if(jQuery(e.target).parents("#header-categories-blog").length==0 && !jQuery(e.target).is("#blog-suckerfish")) {
      jQuery("#header-categories-blog").slideUp("slow");
    }
  });

  jQuery("#twitter-suckerfish").click(function(e) {
    e.preventDefault();
    jQuery("#header-tweets-cage").slideToggle("slow");
    return false;
  });
  jQuery("#header-tweets-cage").mouseup(function() {
    return false
  });
  jQuery(document).mouseup(function(e){
    if(jQuery(e.target).parents("#header-tweets-cage").length==0 && !jQuery(e.target).is("#twitter-suckerfish")) {
      jQuery("#header-tweets-cage").slideUp("slow");
    }
  });
  jQuery.fn.ghostText=function(ghostText,ghostClass){
    jQuery(this).
      val(ghostText).
      addClass(ghostClass).
      focusin(function(){
        jQuery(this).
          removeClass(ghostClass).
          val("");
      }).
      focusout(function(){
        if(jQuery(this).val()==""){
          jQuery(this).
            addClass(ghostClass).
            val(ghostText);
        }
      });
  }
  jQuery("#edit-search-block-form--2").ghostText("What are you looking for?","ghostText");

  if (jQuery(".case-study-slideshow .field-name-field-picture .field-items .field-item").length > 1) {
    jQuery(".case-study-slideshow .field-name-field-picture .field-items").jCarrousel({easing: 'easeOutBounce', duration:'2000', playInterval:3000,	playDirection:"right"}).jCarrousel("play");
  }

	jQuery("a[target=_blank]").live("click",function(){
		open(jQuery(this).attr("href"));
		return false;
	});
  
  jQuery(".client-cage").click(function() {
    jQuery(".client-casestudies").slideUp("slow");
    jQuery("#casestudies_cage_"+jQuery(this).attr("rel")).slideToggle();
    
    return false;
  });
  if(jQuery(".clients-thums").length>0){
    jQuery(".view-id-clients .views-field.views-field-entity-id").mouseenter(function(){
      jQuery(".view-id-clients .views-field.views-field-entity-id")
        .fadeIn("slow")
        .siblings()
          .css("z-index","-10");
      jQuery(this)
        .fadeOut("300",function(){
          jQuery(this)
            .siblings()
            .css("z-index","100");
        });        
    });
    jQuery("#page-wrapper").mousemove(function(e){
      if(jQuery(e.target).parents(".clients-thums .views-row").length==0 && jQuery(e.target).filter(".clients-thums .views-row").length==0){
        jQuery(".view-id-clients .views-field.views-field-entity-id")
          .fadeIn("slow")
          .siblings()
            .css("z-index","-10");
      }
    });
  }
    if (jQuery(".case-study-slideshow .view-case-studies-details1 .view-content .views-row").length > 1) {
        jQuery(".case-study-slideshow .view-case-studies-details1 .view-content").jCarrousel({easing: 'easeOutBounce', duration:'2000', playInterval:3000,	playDirection:"right"}).jCarrousel("play");
    }
});