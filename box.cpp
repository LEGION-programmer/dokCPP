#ifndef BOX_CPP
#define BOX_CPP

#include "Box.h"

template <typename T>
void Box<T>::set(T v) {
    value = v;
}

template <typename T>
T Box<T>::get() const {
    return value;
}

#endif