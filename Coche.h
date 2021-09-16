/*
 * Coche.h
 *
 *  Created on: 3 feb. 2021
 *      Author: julia
 */

#ifndef COCHE_H_
#define COCHE_H_
#include <iostream>
using namespace std;


class Coche {
	
private:
	string categoria;
	string matricula;
	
	    
	
public:
	Coche();
	virtual ~Coche();
	
	void setCategoria(string categoria);
	void setMatricula(string matricula);
	
	string getCategoria();
	string getMatricula();
	string mostrarCoche();
	void aparcar();
	
	Coche(string categoria  , string matricula);
	
	
};

#endif /* COCHE_H_ */
