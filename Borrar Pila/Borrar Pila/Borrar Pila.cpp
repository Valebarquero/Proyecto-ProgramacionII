// Borrar Pila.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <sstream>
#include "Pila.cpp"
#include <string>
using namespace std;


int main()
{
    //Hola este es nuevo
    try {
        Pila<string> strPila;
        strPila.push("amigo");
        strPila.push("estas");
        strPila.push("como");
        strPila.push("Hola");

        cout << strPila.top() << endl;
        strPila.pop();
        cout << strPila.top() << endl;
        strPila.pop();
        cout << strPila.top() << endl;
        strPila.pop();
        cout << strPila.top() << endl;
        strPila.pop();
       
        /*cout << strPila.top() << endl;
        strPila.pop();
        si hago una más porque esta vacia me tira error de top.
        y si solo pongo
         strPila.pop();
        me tiraun error de pop*/

    
    }
    catch (int error) {
        if (error == 1) {
            cerr << "Excepcion de la pila,no se puede ejecutar POP con la pila vacia" << endl;
        }
        else {
            cerr << "Excepcion de la pila,no se puede ejecutar TOP con la pila vacia" << endl;
        }
    }
    //Fin
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
