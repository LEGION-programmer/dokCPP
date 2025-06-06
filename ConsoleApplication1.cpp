#include <iostream>
#include "Figure.h"
#include "Box.h"

int main()
{
    Kwadrat kw(5.0);
    Okrag ok(3.0);

    std::cout << "Kwadrat o boku " << kw.getA() << " ma pole: " << kw.pole() << std::endl;
    std::cout << "Okrag o promieniu " << ok.getA() << " ma pole: " << ok.pole() << std::endl;

    // funkcja sparametryzowana
    Box<int> intBox;
    intBox.set(42);
    std::cout << "Wartosc: " << intBox.get() << std::endl;

    Box<std::string> strBox;
    strBox.set("Hello");
    std::cout << "Wartosc: " << strBox.get() << std::endl;

    return 0;
}
