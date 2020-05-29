;(function ($) {
    'use strict';
    var content  = $('#main').smoothState({
          // onStart runs as soon as link has been activated
          onStart : {
            
            // Set the duration of our animation
            duration: 1,
            
            // Alterations to the page
            render: function () {
  
              // Quickly toggles a class and restarts css animations
              content.toggleAnimationClass('is-exiting');
              $body.animate({ 'scrollTop': 0 });
            }
          }
        }).data('smoothState'); // makes public methods available
  })(jQuery);
  var state = 0;
  var maxState = 6;
  var winWidth = $(window).width();
  var width=0;
var par = document.getElementById('scroll_menu')
//   $(window).resize(function(){
//     winWidth = $(window).width();
//     $('.heading,.scrollmenu').width(winWidth-100);
//     $('.scrollmenu').scrollLeft((winWidth-100)*state);
// }).trigger('resize');

var scroll = function (){
  
}
scroll();

//setTimeout(scroll, 100)

  $('a').click(function(){
   
    // width=width+par.firstElementChild.offsetWidth ;
    width = par.firstElementChild.offsetWidth
   if( width>=par.firstElementChild.offsetWidth )
   {
     //first element is out of sight, so move to the end of the list
     
     width=0;
      par.firstElementChild.style.marginLeft='';//reset to zero
     
      par.appendChild(par.firstElementChild);
     
   }
   else
   {
     //move the first element 'top' px up
     
     par.firstElementChild.style.marginLeft='-'+width+'px';
     
   }
   
   
     
  });

