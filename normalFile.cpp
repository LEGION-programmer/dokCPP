#include "normalFile.h"
#include <fstream>
#include <iostream>

void saveToTextFile(const char* filename, const int* data, int size) {
    std::ofstream outFile(filename);
    if (outFile) {
        for (int i = 0; i < size; ++i) {
            outFile << data[i] << " ";
        }
        outFile.close();
    }
    else {
        std::cerr << "B³¹d zapisu do pliku tekstowego.\n";
    }
}

void readFromTextFile(const char* filename, int* data, int size) {
    std::ifstream inFile(filename);
    if (inFile) {
        for (int i = 0; i < size; ++i) {
            inFile >> data[i];
        }
        inFile.close();
    }
    else {
        std::cerr << "B³¹d odczytu z pliku tekstowego.\n";
    }
}
