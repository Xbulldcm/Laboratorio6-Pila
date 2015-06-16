
#include "stdafx.h"
#include "Elemento.h"


Elemento::Elemento() {
	siguiente = NULL;
	
}

Elemento::~Elemento() {

	if (siguiente != NULL) {
		delete siguiente;
	}
	
}

ostream & operator<<(ostream & out, const Elemento & e) {
	e.imprimir(out);
	return out;
}

bool Elemento::operator <(Elemento& otro) {
	return this->compareTo(&otro) < 0;
}

bool Elemento::operator <=(Elemento& otro) {
	return this->compareTo(&otro) <= 0;
}

bool Elemento::operator >(Elemento& otro) {
	return this->compareTo(&otro) > 0;
}

bool Elemento::operator >=(Elemento& otro) {
	return this->compareTo(&otro) >= 0;
}