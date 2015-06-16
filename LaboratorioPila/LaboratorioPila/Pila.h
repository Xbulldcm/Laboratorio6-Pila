#pragma once

#include "Elemento.h"
using namespace std;
class Pila
{

	friend ostream & operator<<(ostream &, Pila &); //Operar utilizado para imprimir

protected:

	Elemento * ultimo; //Puntero ultilizado para estructurar la Pila

public:

	void push(Elemento *); //Metodo Push. Esto significa poner un nuevo elemento al inicio de la Pila
	void pop(); //Metodo Pop. 
	void peek(); //Metodo Peek. Esto significa ver el primer elemento de la Pila.

	Pila(); //Constructor
	~Pila(); //Destructor

private:
	void imprimir(Elemento *, ostream &); //Metodo imprimir
};

