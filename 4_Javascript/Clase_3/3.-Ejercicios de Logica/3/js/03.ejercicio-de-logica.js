
/*=============================================
CASO 5. SILENCIO. 

Si Ángela habla más bajo que Rosa y Celia habla más alto que Rosa, ¿habla Ángela más alto o más bajo que Celia?
=============================================*/

 var e = {

 	Angela:0,
 	Rosa:0,
 	Celia:0,

 	resultado: function(){

 		if(e.Angela < e.Rosa &&
 		   e.Celia > e.Rosa){

 			return true;
 		}

 		return false;

 	},

 	intervalo: setInterval(function(){

 		e.Angela = Math.ceil(Math.random()*3);
 		e.Rosa = Math.ceil(Math.random()*3);
 		e.Celia = Math.ceil(Math.random()*3);

 		if(e.resultado()){

 			clearInterval(e.intervalo);
 			console.log("Angela", e.Angela);
 			console.log("Rosa", e.Rosa);
 			console.log("Celia", e.Celia);

 		}

 	},1)

 }