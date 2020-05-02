//
// Created by CABRIGI on 5/1/2020.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_ORDEN_H
#define POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_ORDEN_H

#include "producto.h"
#include "usuario.h"

class orden {
private:
    usuario u;
    list<producto> productos;
    double costo{};
public:
    orden(usuario _u);
    void ingresar_productos();
    usuario get_u();
    list<producto> get_productos();
    double get_costo();
    void mostrar_orden();
};


#endif //POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_ORDEN_H
