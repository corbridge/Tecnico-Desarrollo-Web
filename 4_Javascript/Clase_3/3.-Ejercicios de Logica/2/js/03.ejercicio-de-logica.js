/*=============================================
CASO 3. LOS CUATRO PERROS. 

Tenemos cuatro perros: un galgo, un dogo, un alano y un podenco. Éste último come más que el galgo; el alano come más que el galgo y menos que el dogo, pero éste come más que el podenco. ¿Cuál de los cuatro perros come menos?.
=============================================*/

 var c = {

 galgo:0,
 dogo:0,
 alano:0,
 podenco:0,
 resultado: function(){

 if(c.podenco > c.galgo &&
    c.alano > c.galgo &&
    c.alano < c.dogo &&
    c.dogo > c.podenco){

 return true;
 }

 return false;

 },
 intervalo: setInterval(function(){

 	c.galgo = Math.ceil(Math.random()*4)
 	c.dogo = Math.ceil(Math.random()*4)
 	c.alano = Math.ceil(Math.random()*4)
 	c.podenco = Math.ceil(Math.random()*4)

 	if(c.resultado()){

 		clearInterval(c.intervalo);
 		console.log("Galgo", c.galgo)
 		console.log("Dogo", c.dogo)
 		console.log("Alano", c.alano)
 		console.log("Podenco", c.podenco)

 		if(c.galgo == 1){

 			console.log("La raza que menos apetito tiene  es galgo");

 		}else if(c.dogo == 1){

 			console.log("La raza que menos apetito tiene  es dogo");

 		}else if(c.alano == 1){

 			console.log("La raza que menos apetito tiene  es alano");

 		}else{

 			console.log("La raza que menos apetito tiene  es podenco");

 		}

 	}

 },10)

 }