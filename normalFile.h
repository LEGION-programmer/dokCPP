#ifndef FILEHANDLER_H
#define FILEHANDLER_H

void saveToTextFile(const char* filename, const int* data, int size);
void readFromTextFile(const char* filename, int* data, int size);

#endif
