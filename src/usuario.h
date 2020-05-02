    //
// Created by CABRIGI on 5/1/2020.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_USUARIO_H
#define POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_USUARIO_H

#include "tipos.h"

class usuario {
private:
    string nombre;
    string destino;
public:
    usuario();
    usuario(string _nombre, string _destino);
    string get_nombre();
    string get_destino();
};


#endif //POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_USUARIO_H
