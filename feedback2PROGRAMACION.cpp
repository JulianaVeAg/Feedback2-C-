//============================================================================
// Name        : feedback2PROGRAMACION.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Coche.h"
#include "Parking.h"

int main() {

	
	Coche seatAltea("Monovolumen","1111AAA");

	 
	Coche fiatPunto; 
	fiatPunto.setCategoria("Turismo");
	fiatPunto.setMatricula("2222BBB");

	    
	 
	Parking parking1;
	parking1.setCapacidad(38);
	parking1.getCapacidad();
	parking1.setPlazasOcupadas(8);
	parking1.getPlazasOcupadas();
	
	cout << "Las plazas libres son: " << parking1.getCapacidad() - parking1.getPlazasOcupadas() << endl;
	
	
	cout <<"Estado del parking: " << parking1.estado_parking() << endl;
	
	
	parking1.solicitar_entrada(fiatPunto);
	fiatPunto.aparcar();
	parking1.solicitar_salida(fiatPunto);
	 
	
	cout << "Ahora las plazas ocupadas son: " << parking1.getPlazasOcupadas() << endl;

	
	cout <<"Estado del parking: " << parking1.estado_parking() << endl;
	parking1.solicitar_entrada(seatAltea);
	
	
	 
	 
	 
	 
	 
	return 0;
}
