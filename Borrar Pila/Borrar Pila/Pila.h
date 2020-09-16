#pragma once
#include <iostream>
#include<sstream>
#include <vector>//util para usara push,...

using namespace std;
/*si fuera con un parametro
template <class T,int parametro>, para usarlo dentro de la clase, para el tamano*/
template <class T>
class Pila
{
private:
	vector<T> elementos;
public:
	void push(T);
	void pop();
	T top();
	bool empty();
};
/*Push=push back para insertar creo
top=consultar, retornar un valor
pop=recibe parametros,
trow=
Emptyno  */


