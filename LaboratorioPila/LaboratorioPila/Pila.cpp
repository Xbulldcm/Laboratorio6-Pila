#include "stdafx.h"
#include "Pila.h"


Pila::Pila()
{
	ultimo = NULL;
}


Pila::~Pila()
{
	if (ultimo != NULL){
	
		delete ultimo;
	}
}

void Pila::push(Elemento * agregar){

	if (ultimo != NULL){
	
		agregar->siguiente = ultimo;
		ultimo = agregar;

	} else {
	
		ultimo = agregar;
	}

}
void Pila::pop(){

	cout << *ultimo << endl;

	ultimo = ultimo->siguiente;

}

void Pila::peek(){

	cout << *ultimo << endl;

}

ostream & operator<<(ostream & out, Pila & p) {
	p.imprimir(p.ultimo, out);
	
	return out;
}


void Pila::imprimir(Elemento* nodo, ostream& out) {
	if (nodo != NULL) {
		out << *nodo << endl;
		imprimir(nodo->siguiente, out);
	}

}