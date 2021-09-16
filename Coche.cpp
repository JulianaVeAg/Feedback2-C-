
#include <iostream>
using namespace std;
#include "Coche.h"

Coche::Coche() {
	//matricula= " ";
	//categoria = " ";
}

Coche::~Coche() {
	// TODO Auto-generated destructor stub
}

void Coche::setCategoria(string categoria){
	this->categoria=categoria;
}
void Coche::setMatricula(string matricula){
	this->matricula=matricula;
}
string Coche::getCategoria(){
	cout << "La categoria de este coche es: " << categoria << endl;
	return categoria;
}
string Coche::getMatricula(){
	cout << "La matricula de este coche es: " << matricula << endl;
	return matricula;
}
string Coche::mostrarCoche(){
	string mostrarCoche= " ";
	cout << "La matricula del coche es " << matricula << endl;
	
	
	cout << "la categoria del coche es: " << categoria <<  endl;
	 if (categoria == "Monovolumen"){
		 cout << "Este coche es un monovolumen, puede aparcar en la planta 1" << endl;
	 }else if(categoria == "Furgoneta"){
			 cout << "Este coche es una furgoneta, debe aparcar en el sotano" << endl;
			 
	 }else if(categoria=="Turismo"){
		 cout << "Este coche es un turismo, debe aparcar en la planta 2" << endl;
	 }return mostrarCoche;
	
}

void Coche::aparcar(){
	cout << "El coche esta aparcado, objetivo logrado" << endl;
		
}

Coche::Coche(string categoria, string matricula){
	this ->matricula=matricula;
	this ->categoria=categoria;
	
}