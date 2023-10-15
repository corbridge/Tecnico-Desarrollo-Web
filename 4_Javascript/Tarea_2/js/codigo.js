/*=============================================
OBJETO CON LAS PROPIEDADES DE LA CALCULADORA
=============================================*/

var p = {

	teclas: document.querySelectorAll("#calculadora ul li"),
	accion: null,
	digito: null,
	operaciones: document.querySelector("#operaciones"),
	cantidadSignos: 0,
	cantidadDecimal: false,
	resultado: false

}


/*=============================================
OBJETO CON LOS MÉTODOS DE LA CALCULADORA
=============================================*/

var m = {

	inicio: function() {

		for (var i = 0; i < p.teclas.length; i++) {

			p.teclas[i].addEventListener("click", m.oprimirTecla)

		}
	},

	teclado: function() {

		document.addEventListener("keydown", m.oprimir);

	},

	oprimir: function(tecla) {

		if (tecla.key == 48 || tecla.key == 96) {

			p.accion = "numero";
			p.digito = 0;
		}

		else if (tecla.key == 49 || tecla.key == 97) {

			p.accion = "numero";
			p.digito = 1;
		}

		else if (tecla.key == 50 || tecla.key == 98) {

			p.accion = "numero";
			p.digito = 2;
		}

		else if (tecla.key == 51 || tecla.key == 99) {

			p.accion = "numero";
			p.digito = 3;
		}

		else if (tecla.key == 52 || tecla.key == 100) {

			p.accion = "numero";
			p.digito = 4;
		}

		else if (tecla.key == 53 || tecla.key == 101) {

			p.accion = "numero";
			p.digito = 5;
		}

		else if (tecla.key == 54 || tecla.key == 102) {

			p.accion = "numero";
			p.digito = 6;
		}

		else if (tecla.key == 55 || tecla.key == 103) {

			p.accion = "numero";
			p.digito = 7;
		}

		else if (tecla.key == 56 || tecla.key == 104) {

			p.accion = "numero";
			p.digito = 8;
		}

		else if (tecla.key == 57 || tecla.key == 105) {

			p.accion = "numero";
			p.digito = 9;
		}

		else if (tecla.key == 187 || tecla.key == 107) {

			p.accion = "signo";
			p.digito = "+";
		}

		else if (tecla.key == 189 || tecla.key == 109) {

			p.accion = "signo";
			p.digito = "-";
		}

		else if (tecla.key == 88 || tecla.key == 106) {

			p.accion = "signo";
			p.digito = "*";
		}

		else if (tecla.key == 111) {

			p.accion = "signo";
			p.digito = "/";
		}

		else if (tecla.key == 190 || tecla.key == 110) {

			p.accion = "decimal";
			p.digito = ".";
		}

		else if (tecla.key == 13) {

			p.accion = "igual";
		}

		else if (tecla.key == 8) {

			p.accion = "";
			m.borrarCalculadora();
		}

		else{
			p.accion = "";
			p.digito = "";

		}


		m.calculadora(p.accion, p.digito);

	},

	oprimirTecla: function(tecla) {

		p.accion = tecla.target.getAttribute("class");
		p.digito = tecla.target.innerHTML;

		m.calculadora(p.accion, p.digito);

	},

	calculadora: function(accion, digito) {

		switch (accion) {

			case "numero":

				p.cantidadSignos = 0;

				if (p.operaciones.innerHTML == "0") {

					p.operaciones.innerHTML = digito;

				} else {

					if (p.resultado) {

						p.resultado = false;
						p.operaciones.innerHTML = digito;


					} else {

						p.operaciones.innerHTML += digito;
					}

				}

				break;

			case "signo":

				p.cantidadSignos++

					if (p.cantidadSignos == "1") {

						if (p.operaciones.innerHTML == "0") {

							p.operaciones.innerHTML = 0;

						}else if(p.cantidadDecimal){

							p.operaciones.innerHTML += 0;
							p.cantidadSignos = 0;
							p.cantidadDecimal = false;

						}else {

							p.operaciones.innerHTML += digito;

							p.cantidadDecimal = false;

							p.resultado = false;

						}

					}

				break;

			case "decimal":

				if (!p.cantidadDecimal && p.cantidadSignos!=1) {

					p.operaciones.innerHTML += digito;

					p.cantidadDecimal = true;
					console.log("p.cantidadDecimal", p.cantidadDecimal);

					p.resultado = false;

				}

				break;

			case "igual":

				p.operaciones.innerHTML = eval(p.operaciones.innerHTML);

				var expresion = /./g;

				if(!expresion.test(p.operaciones.innerHTML)){

					p.cantidadDecimal = true;
				}

				p.resultado = true;

				break;

		}

	},

	borrarCalculadora: function() {

		p.resultado = false;
		p.cantidadDecimal = false;
		p.operaciones.innerHTML = 0;

	}

}

m.inicio();
m.teclado();