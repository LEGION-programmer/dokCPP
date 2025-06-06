#include <iostream>
#include "Figure.h"
#include "Box.h"
#include "filehandler.h"

int main()
{   
    // klasa 
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




    // pliczek binaryny
    const char* filename = "data.bin";
    int dataToWrite[5] = { 10, 20, 30, 40, 50 };
    int dataRead[5] = { 0 };

    saveToFile(filename, dataToWrite, 5);
    readFromFile(filename, dataRead, 5);

    std::cout << "Odczytane dane:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << dataRead[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
