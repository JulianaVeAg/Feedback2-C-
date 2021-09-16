/*
 * Parking.h
 *
 *  Created on: 3 feb. 2021
 *      Author: julia
 */

#ifndef PARKING_H_
#define PARKING_H_
#include <iostream>
using namespace std;
#include "Coche.h"

class Parking {
private:
	int capacidad;

	int plazasOcupadas;


public:
	Parking();
	Parking( int capacidad, int plazasOcupadas);
	virtual ~Parking();
	void setCapacidad(int capacidad);
	void setPlazasOcupadas(int plazasOcupadas);
	int getPlazasOcupadas();
	int getCapacidad();
	string estado_parking();
	void solicitar_entrada(Coche coche1);
	void solicitar_salida(Coche coche1);


};


#endif /* PARKING_H_ */
