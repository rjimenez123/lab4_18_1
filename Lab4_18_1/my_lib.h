#ifndef MY_LIB_H
#define MY_LIB_H

//#include <iostream>
//#include <iomanip>

using namespace std;

void readString(char*&, char);
void read_dataline(char***&, double*&);
char** read_doc();
void incrementar_espacios(char***&, int&, int&);
void incrementar_espacios(double*&, int, int);

#endif /* MY_LIB_H */
