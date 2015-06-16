
#ifndef ELEMENTO_H_
#define ELEMENTO_H_



using namespace std;

class Elemento {

	friend class Pila; //Elemento es amigo de la clase Pila
	friend ostream & operator<<(ostream &, const Elemento &); //Operador utilizado para imprimir

protected:
	Elemento * siguiente; //Puntero utilizado enlazar los elementos

public:
	Elemento(); //Constructor
	virtual ~Elemento(); //Destructor
	virtual int compareTo(Elemento *) = 0; //Metodo abstracto para comparar elementos
	virtual void imprimir(ostream &) const = 0; //Metodo abstracto para imprimir

	bool operator<(Elemento &);
	bool operator<=(Elemento &);
	bool operator>(Elemento &);
	bool operator>=(Elemento &);

};

ostream & operator<<(ostream &, const Elemento &);

#endif /* ELEMENTO_H_ */
