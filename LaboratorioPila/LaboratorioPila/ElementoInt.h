

#ifndef ELEMENTOINT_H_
#define ELEMENTOINT_H_

#include "Elemento.h"


using namespace std;

class ElementoInt : public Elemento { //Hereda de Elemento

private:

	int i; //Variable contenida dentro del elemento de tipo Integer

public:

	ElementoInt(int); //Constructor
	~ElementoInt(); //Destructor
	int compareTo(Elemento *);  //Metodo comparar
	void imprimir(ostream &) const; //Metodo imprimir
};

#endif /* ELEMENTOINT_H_ */
