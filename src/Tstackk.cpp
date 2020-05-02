//
// Created by CABRIGI on 5/1/2020.
//

#include "Tstackk.h"


template<typename T>
Tstackk<T>::Tstackk(int _cap) {
    data = new T[cap];
    cap = _cap;
    top = -1;
}

template<typename T>
void Tstackk<T>::push(T x) {
    if(is_full()) {
        return;
    }
    else {
        top++;
        data[top] = x;
    }
}

template<typename T>
void Tstackk<T>::pop() {
    if(is_empty()) {
        return;
    }
    else {
        top--;
    }
}

template<typename T>
int Tstackk<T>::get_size() {
    return top + 1;
}

template<typename T>
bool Tstackk<T>::is_full() {
    if(top + 1 == cap) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Tstackk<T>::is_empty() {
    if(top == -1) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
T Tstackk<T>::get_top_data() {
    return data[top];
}
