#include "Figure.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Figure::Figure(double a, double b) : a(a), b(b) {}

double Figure::getA() const { return a; }
double Figure::getB() const { return b; }

Kwadrat::Kwadrat(double bok) : Figure(bok, bok) {}

double Kwadrat::pole() const {
    return a * a;
}

Okrag::Okrag(double promien) : Figure(promien, 0) {}

double Okrag::pole() const {
    return M_PI * a * a;
}
