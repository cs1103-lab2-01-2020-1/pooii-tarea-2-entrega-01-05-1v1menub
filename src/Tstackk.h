//
// Created by CABRIGI on 5/1/2020.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_TSTACKK_H
#define POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_TSTACKK_H

template <typename T>
class Tstackk {
private:
    T* data;
    int cap;
    int top;
public:
    Tstackk(int _cap);
    void push(T x);
    void pop();
    int get_size();
    bool is_full();
    bool is_empty();
    T get_top_data();
};


#endif //POOII_TAREA_2_ENTREGA_01_05_1V1MENUB_TSTACKK_H
