#ifndef BOX_H
#define BOX_H

template <typename T>
class Box {
private:
    T value;
public:
    void set(T v);
    T get() const;
};

#include "Box.cpp" // szablony musz¹ byæ do³¹czone tutaj

#endif