#include "filehandler.h"
#include <fstream>
#include <iostream>

void saveToFile(const char* filename, const int* data, int size) {
    std::ofstream outFile(filename, std::ios::binary);
    if (outFile) {
        outFile.write(reinterpret_cast<const char*>(data), sizeof(int) * size);
        outFile.close();
    }
    else {
        std::cerr << "B³¹d zapisu pliku.\n";
    }
}

void readFromFile(const char* filename, int* data, int size) {
    std::ifstream inFile(filename, std::ios::binary);
    if (inFile) {
        inFile.read(reinterpret_cast<char*>(data), sizeof(int) * size);
        inFile.close();
    }
    else {
        std::cerr << "B³¹d odczytu pliku.\n";
    }
}
