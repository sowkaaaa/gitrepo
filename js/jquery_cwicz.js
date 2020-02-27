$(document).ready(function(){
  $(".wynik").text("Nowa treść");
	console.log(($("p").text()));
  $("#przycisk").click(function(){
  var vnk = parseInt($("#vnk").val());
  var nk = parseInt($("#nk").val());
  var R = vnk / nk * 100;
  var div2 = '<div class="wspolczynnik">'+R+'</div>';
  $("div.wynik").after(div2);
  });
  $("input").mouseover(function(){
    $(this).addClass("tloBlue");
  });
  $("input").mouseout(function(){
    $(this).removeClass("tloWhite");
  });
    $("#d1").dblclick(function(){
      $("#d1").toggle(100);
  });
    $("#k1").mouseover(function(){
      $("#k1").toggle(100);
  });
    $("#d2").mouseover(function(){
      $("#k2").toggle(1000);
  });
    $("#k2").mouseleave(function(){
      $("#d4").toggle(1000);
  });
    $("#d4").mouseover(function(){
      $("#k2").toggle(1000);
  });
    $("#d4").mouseleave(function(){
      $("#k2").toggle(1000);
});

});
