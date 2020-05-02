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
    cout << endl << "---Orden registrada correctamente---" << endl;
    if(y.get_productos().size() <= 5) {
        cout << "La orden sera enviada via bicicleta." << endl;
    }
    else {
        cout << "La orden sera enviada via camion." << endl;
    }
}


void ejercicio_2() { //tambien estoy utilizando el template class Tstakk porque es lo mismo pero sin template XD.
    Tstackk<int> s1(5); // en esta linea no tendria que especificar el tipo con <int>. esa es la unica diferencia
    for(int i = 1; i <= 5; i++) {
        s1.push(i*10);
    }
    while(!s1.is_empty()) {
        cout << s1.get_top_data() << " ";
        s1.pop();
    }
}


void ejercicio_3() {
    int arr1[] = {6,10,22,17,9,45};
    int arr2[] = {7,11,23,18,10,46};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    list<int> l1(arr1, arr1 + s1);
    list<int> l2(arr2, arr2 + s2);
    l1.sort();
    l2.sort();
    auto it = l1.begin();
    auto it2 = l2.begin();
    cout << "Lista 1 sorted: " << endl;
    for(;it != l1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << "Lista 2 sorted: " << endl;
    for(;it2 != l2.end(); it2++) {
        cout << *it2 << " ";
    }
    l1.merge(l2);
    auto it3 = l1.begin();
    cout << endl << "Merge de lista 1 y 2: " << endl;
    for(;it3 != l1.end(); it3++) {
        cout << *it3 << " ";
    }
    cout << endl << "Binary search de un 46: " << endl;
    if(binary_search(l1.begin(), l1.end(), 46)) {
        cout << "Encontrado";
    }
    else {
        cout << "No encontrado";
    }
    cout << endl << "Binary search de un 100: " << endl;
    if(binary_search(l1.begin(), l1.end(), 100)) {
        cout << "Encontrado";
    }
    else {
        cout << "No encontrado";
    }
    cout << endl << "Lower bound del elemento mas grande (iterador a 46): " << endl;
    cout <<  *lower_bound(l1.begin(), l1.end(), 46);
}


void ejercicio_4() {
    Tstackk<double> s1(5);
    for(int i = 1; i <= 5; i++) {
        s1.push(i*6.9);
    }
    while(!s1.is_empty()) {
        cout << s1.get_top_data() << " ";
        s1.pop();
    }
}