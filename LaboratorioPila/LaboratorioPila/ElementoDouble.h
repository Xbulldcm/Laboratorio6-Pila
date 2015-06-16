

#ifndef ELEMENTODOUBLE_H_
#define ELEMENTODOUBLE_H_

#include "Elemento.h"

using namespace std;

class ElementoDouble : public Elemento { //Hereda de Elemento

private:
	double d; //Variable contenida dentro del elemento de tipo Double
public:
	ElementoDouble(double d); //Constructor
	~ElementoDouble(); //Destructor
	int compareTo(Elemento *); //Metodo de comparar
	void imprimir(ostream &) const; //Metodo de imprimir
};

#endif /* ELEMENTODOUBLE_H_ */
