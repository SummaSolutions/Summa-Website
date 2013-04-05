// Mobile bottom menu
/*jQuery(document).ready(function(){
	jQuery('.menu-mobile-bottom li').click(function() {
		jQuery('.menu-mobile-bottom li').removeClass('selected').removeClass('arrow-down');
		jQuery(this).addClass('selected');
		jQuery(this).addClass('arrow-down');
		//jQuery(this).removeClass('arrow');
	});
})*/

// Google plus button
(function() {
	var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
	po.src = 'https://apis.google.com/js/plusone.js';
	var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
})();

jQuery(document).ready(function(){
    jQuery("#search-block-form #edit-submit").attr("value", '');
});