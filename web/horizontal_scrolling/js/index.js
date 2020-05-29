$(function() {
    var x = 0;
    $('nav a').bind('click',function(event){
        var anchor = $(this);
        
       var topAndLeft =  $(anchor.attr('href')).offset();
      //console.log(topAndLeft)
       x = topAndLeft.left;
        $('html, body').stop().animate({
            
            scrollLeft: topAndLeft.left,
            
        }, 1000);
       
        event.preventDefault();
    });
    
    $(window).bind("wheel", event => {
        // $('body').css('background-position', '0% ' + parseInt(-x / 10) + 'px');
    //     console.info(event);
    //     var content = $(event.currentTarget).find('.scroll');

    //     var content_height = content.height();
    //    console.log(content.scrollTop());
    //    console.log(x);
    //    if(content_height < 200 || content_height == null){
        
        if(event.originalEvent.deltaY > 0 && x < 2654){
            x+=250;
           
        }
            
        else if(event.originalEvent.deltaY < 0 && x > 0){
            x-=250;
          
        }
        // 
       console.log(x)
        
            $('html, body').stop().animate({
                
                scrollLeft: x
            },2000);
        // }
    });
    $('li').click(function(){
       
        $(this).prependTo($(this).parent()).show( 1000);
        // $('body').animate({'background-position-x': -100},2000);
    })
   
});
