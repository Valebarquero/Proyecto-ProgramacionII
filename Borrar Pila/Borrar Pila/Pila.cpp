#include "Pila.h"


template<class T>
inline void Pila<T>::push(T elem)
{
	elementos.push_back(elem);
}

template<class T>
void Pila<T>::pop() {
	if (elementos.empty()) {
		throw 1;
	}
	else { //sino esta vacia
		elementos.pop_back();
	}
}

template<class T>
T Pila<T>::top()//consulta
{
	if (elementos.empty()) {
		throw 2;
	}
	else { //sino esta vacia
		elementos.back();
		return elementos.back();
	}
}

template<class T>
bool Pila<T>::empty()
{
	return elementos.empty();
}
