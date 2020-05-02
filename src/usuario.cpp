//
// Created by CABRIGI on 5/1/2020.
//

#include "usuario.h"

usuario::usuario() {
}

usuario::usuario(string _nombre, string _destino) {
    nombre = _nombre;
    destino = _destino;
}

string usuario::get_nombre() {
    return nombre;
}

string usuario::get_destino() {
    return destino;
}
