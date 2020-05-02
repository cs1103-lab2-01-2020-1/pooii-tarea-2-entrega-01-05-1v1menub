//
// Created by CABRIGI on 5/1/2020.
//

#include "producto.h"

producto::producto() {
}

producto::producto(string _pnombre) {
    pnombre = _pnombre;
}

string producto::get_pnombre() {
    return pnombre;
}

