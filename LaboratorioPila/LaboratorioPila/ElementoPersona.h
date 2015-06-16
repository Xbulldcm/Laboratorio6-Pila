

#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "Elemento.h"
#include "Persona.h"


using namespace std;

class ElementoPersona : public Elemento{ //Hereda de Elemento

private:
	Persona * p; //Variable contenida dentro del elemento de tipo Persona

public:

	ElementoPersona(Persona*); // Constructor
	~ElementoPersona(); //Destructor
	int compareTo(Elemento *); //Metodo comparar en base al ID
	void imprimir(ostream &) const; //Metodo imprimir
};

#endif /* ELEMENTOPERSONA_H_ */
