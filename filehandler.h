#ifndef FILEHANDLER_H
#define FILEHANDLER_H

void saveToFile(const char* filename, const int* data, int size);
void readFromFile(const char* filename, int* data, int size);

#endif
