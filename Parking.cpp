/*
 * Parking.cpp
 *
 *  Created on: 3 feb. 2021
 *      Author: julia
 */

#include "Parking.h"




Parking::Parking() {

	capacidad=0;
	plazasOcupadas=0;
}

Parking::~Parking() {
	// TODO Auto-generated destructor stub
}


Parking::Parking( int capacidad, int plazasOcupadas){
	this->capacidad=capacidad;

	this ->plazasOcupadas=plazasOcupadas;
}


void Parking::setCapacidad(int capacidad){
	this ->capacidad=capacidad;
}


int Parking::getCapacidad(){
	return capacidad;
}

void Parking::setPlazasOcupadas(int plazasOcupadas){
	this ->plazasOcupadas=plazasOcupadas;
}

int Parking::getPlazasOcupadas(){
	return plazasOcupadas;
}


string Parking::estado_parking(){
	string estado=" ";

	if(plazasOcupadas<capacidad){
		estado="libre";


	}else if(plazasOcupadas==capacidad){
		estado="completo";

	}return estado;

}


void Parking::solicitar_entrada(Coche coche1){
	string estado=" ";

	estado_parking();

	estado=estado_parking();

	if(estado=="libre"){
	cout << "Bienvenido: Pase" << endl;
		coche1.mostrarCoche();
		plazasOcupadas++;

	}else {
		cout << "Lo siento, no puede pasar" << endl;
	}

}

void Parking::solicitar_salida(Coche coche1){
	cout << "el coche sale del parking" << endl;
	plazasOcupadas--;
}

