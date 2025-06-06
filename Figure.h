#pragma once
#include <string>

// Klasa szablonowa Pair
template<typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T first, T second) : first(first), second(second) {}
    T getFirst() const { return first; }
    T getSecond() const { return second; }
};

class Figure {
protected:
    double a, b;
public:
    Figure(double a, double b);
    virtual double pole() const = 0; // metoda wirtualna czysto abstrakcyjna
    double getA() const;
    double getB() const;
};

class Kwadrat : public Figure {
public:
    Kwadrat(double bok);
    double pole() const override;
};

class Okrag : public Figure {
public:
    Okrag(double promien);
    double pole() const override;
};
