//
// Created by CABRIGI on 5/1/2020.
//

#include "ejercicios.h"

void ejercicio_1() {
    string n;
    string d;
    cout << "---Registro de usuario---" << endl << "Ingrese su nombre: " << endl;
    getline(cin, n);
    cout << "Ingrese su direccion destino: " << endl;
    getline(cin, d);
    cout << "Usuario registrado correctamente" << endl << "---Protocolo de creacion de orden inicializado---" << endl;
    usuario x(n, d);
    orden y(x);
    y.ingresar_productos();
    y.mostrar_orden();
    cout << "---Orden registrada correctamente---" << endl;
    if(y.get_productos().size() <= 5) {
        cout << "La orden sera enviada via bicicleta." << endl;
    }
    else {
        cout << "La orden sera enviada via camion." << endl;
    }
}

void ejercicio_2() {

}

void ejercicio_3() {

}


void ejercicio_4() {

}
