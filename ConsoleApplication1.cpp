#include <iostream>
#include "Figure.h"
#include "Box.h"
#include "filehandler.h"
#include "normalFile.h"

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

    int size;
    std::cout << "Ile liczb chcesz zapisać? ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Nieprawidłowy rozmiar.\n";
        return 1;
    }

    int* userData = new int[size];
    std::cout << "Podaj " << size << " liczb całkowitych:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> userData[i];
    }

    saveToFile(filename, userData, size);

    int* readData = new int[size];
    readFromFile(filename, readData, size);

    std::cout << "Dane odczytane z pliku:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << readData[i] << " ";
    }
    std::cout << std::endl;

    delete[] userData;
    delete[] readData;



    // pliczek zwykly
    const char* nazwaPliku = "data.txt";

    int size;
    std::cout << "Ile liczb chcesz zapisać? ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Nieprawidłowy rozmiar.\n";
        return 1;
    }

    int* userDataNormalFile = new int[size];
    std::cout << "Podaj " << size << " liczb całkowitych:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> userData[i];
    }

    saveToTextFile(nazwaPliku, userDataNormalFile, size);

    int* readData = new int[size];
    readFromTextFile(nazwaPliku, readData, size);

    std::cout << "Dane odczytane z pliku:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << readData[i] << " ";
    }
    std::cout << std::endl;

    delete[] userDataNormalFile;
    delete[] readData;

    return 0;
}
