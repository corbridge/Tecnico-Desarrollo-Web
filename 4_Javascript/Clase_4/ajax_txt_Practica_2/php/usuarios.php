<?php

echo 

header('Content-type: application/json; charset=utf-8');

$respuesta = [
	[
		'id' => '1',
		'nombre' => 'Mcclure Warren',
		'edad' => 22,
		'pais' => 'Yemen',
		'correo' => 'mcclurewarren@acusage.com'
	],
	[
		'id' => '2',
		'nombre' => 'Gardner Sweeney',
		'edad' => 40,
		'pais' => 'Benin',
		'correo' => 'gardnersweeney@acusage.com'
	],
	
	[
		'id' => '3',
		'nombre' => 'Navarro Rollins',
		'edad' => 28,
		'pais' => 'Gibraltar',
		'correo' => 'navarrorollins@acusage.com'
	],
	
	[
		'id' => '4',
		'nombre' => 'Shelley Saunders',
		'edad' => 24,
		'pais' => 'South Africa',
		'correo' => 'shelleysaunders@acusage.com'
	],
	
	[
		'id' => '5',
		'nombre' => 'Barbra Simmons',
		'edad' => 26,
		'pais' => 'Togo',
		'correo' => 'barbrasimmons@acusage.com'
	]
];

echo json_encode($respuesta);