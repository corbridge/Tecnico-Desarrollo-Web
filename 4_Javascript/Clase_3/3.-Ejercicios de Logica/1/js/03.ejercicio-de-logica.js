/*=============================================
CASO 4. SEIS AMIGOS DE VACACIONES. 

Seis amigos desean pasar sus vacaciones juntos y deciden, cada dos, utilizar diferentes medios de transporte; sabemos que Alejandro no utiliza el coche ya que éste acompaña a Benito que no va en avión. Andrés viaja en avión. Si Carlos no va acompañado de Darío ni hace uso del avión, podría Vd. decirnos en qué medio de transporte llega a su destino Tomás.
=============================================*/

 var d = {

 	avion:1,
 	coche:2,
 	otro:3,
	
 	alejandro:{transporte:0},
 	benito:{transporte:0},
 	andres:{transporte:0},
 	carlos:{transporte:0},
 	dario:{transporte:0},
 	tomas:{transporte:0},
	
 	resultado: function(){

 		if(d.alejandro.transporte != d.coche && 
 		   d.alejandro.transporte == d.benito.transporte && 
 		   d.benito.transporte != d.avion &&

 		   d.andres.transporte == d.avion &&

 		   d.carlos.transporte != d.dario.transporte &&
 		   d.carlos.transporte != d.avion &&
 		   d.carlos.transporte == d.coche &&

 		   d.andres.transporte == d.dario.transporte &&  
 		   d.carlos.transporte == d.tomas.transporte
 		   ){

 			return true;
 		}

 		return false;

 	},

 	intervalo: setInterval(function(){
		
 		d.alejandro.transporte = Math.ceil(Math.random()*3);
 		d.benito.transporte = Math.ceil(Math.random()*3);
 		d.andres.transporte = Math.ceil(Math.random()*3);
 		d.carlos.transporte = Math.ceil(Math.random()*3);
 		d.dario.transporte = Math.ceil(Math.random()*3);
 		d.tomas.transporte = Math.ceil(Math.random()*3);
		
		
 		if(d.resultado()){

 			clearInterval(d.intervalo);
			
 			if(d.tomas.transporte == 2){

 				console.log("Tom+as viaja en avión");
			
 			}else if(d.tomas.transporte == 2){

 				console.log("Tom+as viaja en coche");

 			}else{

 				console.log("Tom+as viaja en otro transporte");

 			};

 		}

 	},1)


 }