$(window).on('load',function(){
	$('#status').delay(1000).fadeOut();
	$('#preloder').delay(1200).fadeOut();
})

// Teams
$(function(){
  $("#team-members").owlCarousel({
  		items : 2,
  		loop : true,
  		autoplay : true,
  		smartSpeed : 700,
  		autoplayHoverPause : true,
  		nav : true,
  		dots : false,
  		navText : ['<i class="fas fa-angle-left"></i>','<i class="fas fa-angle-right"></i>']
  });
});

$(function(){
  $('#progress-elements').waypoint(function(){
    $('.progress-bar').each(function(){
      $(this).animate({
        width: $(this).attr("aria-valuenow") + "%"
      },1000);
    }) //end of method
     this.destroy();
  },{
  offset:'bottom-in-view'
})
})
