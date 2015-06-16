

#ifndef PERSONA_H_
#define PERSONA_H_

#include "Elemento.h"

using namespace std;

class Persona {

public:

	int ID; // ID de la Persona
	int edad; //Edad de la Persona
	string nombre; //Nombre de la Persona

	Persona(int, string, int); //Cosntructor
	~Persona(); //Destructor

};

#endif /* PERSONA_H_ */
