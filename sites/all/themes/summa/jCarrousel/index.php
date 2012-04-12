

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
	<title>jqOS 2.0</title>
	<script type="text/javascript" src="jquery-1.4.2.min.js"></script>
	<script type="text/javascript" src="jquery.ui.widget.js"></script>
	<script type="text/javascript" src="jquery.effects.core.js"></script>
	
	<script type="text/javascript" src="jCarrousel.js"></script>
	<style>
		.box{
			width:100px;
			height:100px;
			background-color:#ff0000;
		}
		.carrousel,.carrousel2,.carrousel3{
			width:340px;
			height:120px;
			font-size:30px;
			position:relative;
			overflow:hidden;
			clear:both;
		}
		.slides{
			width:300px;
			height:80px;
			padding:10px;
			border:10px solid #000;
			float:left;
		}
	</style>
	<script>
		var carrousel;
		$(document).ready(function(){
			$.each($.easing,function(name){
				$(".easingSelect").append("<option>"+name+"</option>");
			});
			for(i=1;i<=15;i++){
				$(".durationSelect").append("<option>"+(i*100)+"</option>");
			}
			carrousel=$(".carrousel").jCarrousel();
			carrousel=$(".carrousel2").jCarrousel({type:"vertical"});
			$(".slideControl").click(function(){
				var self=this;
				var action=$(this).attr("class").replace(" slideControl","");
				var duration=parseInt($(this).closest("tr").find(".durationSelect").val());
				var easing=$(this).closest("tr").find(".easingSelect").val();
				if(action=="goToSlide"){
					
				}else{
					carrousel.jCarrousel(action,{
						duration:duration,
						easing:easing
					});
				}
			});
		});
	</script>
</head>

<body>
	<div class="carrousel">
		<?php
			for($i=0;$i<4;$i++){
				echo'
		<div class="slides">
			Tomy gay '.$i.'
		</div>
				';
			}
		?>
	</div>
	<div class="carrousel2">
		<?php
			for($i=0;$i<4;$i++){
				echo'
		<div class="slides">
			Tomy gay '.$i.'
		</div>
				';
			}
		?>
	</div>
	<div class="carrousel3">
		<?php
			for($i=0;$i<14;$i++){
				echo'
		<div class="slides">
			Tomy gay '.$i.'
		</div>
				';
			}
		?>
	</div>
	 <br /> <br />
	 <table>
		<tr>
			<td>
				Duration
			</td>
			<td>
				Easing
			</td>
			<td>
				Action
			</td>
		</tr>
		<tr>
			<td>
				<select class="durationSelect">
					
				</select>
			</td>
			<td>
				<select class="easingSelect">
					
				</select>
			</td>
			<td>
				<a class="nextSlide slideControl" href="#">carrousel.jCarrousel("nextSlide",options);</a>
			</td>
		</tr>
		<tr>
			<td>
				<select class="durationSelect">
					
				</select>
			</td>
			<td>
				<select class="easingSelect">
					
				</select>
			</td>
			<td>
				<a class="prevSlide slideControl" href="#">carrousel.jCarrousel("prevSlide",options);</a> 
			</td>
		</tr>
		<tr>
			<td>
				<select class="durationSelect">
					
				</select>
			</td>
			<td>
				<select class="easingSelect">
					
				</select>
			</td>
			<td>
				<input class="slideN" /> <a class="goToSlide slideControl" href="#">carrousel.jCarrousel("goToSlide",slide,options);</a>
			</td>
		</tr>
		<tr>
			<td>
				<select class="durationSelect">
					
				</select>
			</td>
			<td>
				<select class="easingSelect">
					
				</select>
			</td>
			<td>
				<a class="play slideControl" href="#">carrousel.jCarrousel("play",options);</a>
			</td>
		</tr>
		<tr>
			<td>
				<select class="durationSelect">
					
				</select>
			</td>
			<td>
				<select class="easingSelect">
					
				</select>
			</td>
			<td>
				<a class="stop slideControl" href="#">carrousel.jCarrousel("stop",options);</a>
			</td>
		</tr>
	 </table>

	<br /> <br />
	El carrousel se le pueden configurar dos cosas : <br />
	$(".carrousel").jCarrousel({
		speed:"slow",
		easing:"linear"
	}); <br />
	Esos son los valores por defecto, en speed puede ir "slow" (igual a 200ms) "fast" (igual a 600ms) o sino un int (que seria la cantidad de ms. Por ej: 800 serian 800ms). <br />
	Y en easing va el efecto, esto te lo explico despues, tenes que agregar jquery ui para usarlo, pero esta copado. (por ahora no lo toques) <br />
	Y bueno como veras en el codigo una vez que aplicas el plugin y guardas lo que devuelve en una variable, con ese objeto podes llamar a los metodos .prevSlide() .nextSlide() y .goToSlide(). <br />
	<br />
	Issues que encontre<br /><br />
	Usando el goToSlide() no da la vuelta correctamente<br />
	Si llamas muy rapido a los metodos no hace bien la vuelta, sino que vuelve al principio<br />
	No se puede hacer $(".carrousel").jCarrousel(); teniendo varios divs de clase carrousel, si queres hacer varios carrouseles en una pagina tendrias que llamarlo una vez por cada div y guardarlo en variables diferentes.<br />
	
	
	<?

$chabones=array();

?>
</body>
</html>
