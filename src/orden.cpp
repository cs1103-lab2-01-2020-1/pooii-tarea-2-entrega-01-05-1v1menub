//
// Created by CABRIGI on 5/1/2020.
//

#include "orden.h"

orden::orden(usuario _u) {
    u = _u;
}

void orden::ingresar_productos() {
    string n;
    bool e = true;
    int son;
    while(e) {
        cout << "Ingrse nombre del producto deseado: " << endl;
        cin >> n;
        producto x(n);
        productos.push_back(x);
        cout << "Quiere ingresar otro producto?" << endl << "Si -> 1" << endl <<"No -> 0" << endl;
        cin >> son;
        if(son == 0) {
            e = false;
        }
        else {
            e = true;
        }
    }
    costo = productos.size()*0.5 + 3;
}

usuario orden::get_u() {
    return u;
}

list<producto> orden::get_productos() {
    return productos;
}

double orden::get_costo() {
    return costo;
}

void orden::mostrar_orden() {
    cout << "---Resumen del orden---"<< endl;
    cout << "Usuario: "<< u.get_nombre() << endl;
    cout << "Destino: " << u.get_destino() << endl;
    cout << "Productos: ";
    list<producto>::iterator it = productos.begin();
    for(; it != productos.end(); it++) {
        cout << it->get_pnombre() << " ";
    }
    cout << endl;
    cout << "Costo: " << costo << " soles" << endl;
}
