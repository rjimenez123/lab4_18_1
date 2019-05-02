#include "my_lib.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

#define INC 5

using namespace std;

void readString(char*& string, char delim) {
    cin.clear();
    char buff[100], c;
    int n = 0;
    while (1) {
        c = cin.get();
        if(c == delim || cin.eof()) break;
        buff[n] = c;
        n++;
    }
    
    string = new char[n+1];
    for (int i = 0; i < n; i++)
        string[i] = buff[i];
    string[n] = '\0';
}

void read_dataline(char***& datos_doctor, double*& tarifas_doctor) {
    int nd = 0, tam = 0;
    while(1) {
        if (cin.peek() == '\n') break;
        if (nd == tam) {
            incrementar_espacios(datos_doctor, nd, tam);
            incrementar_espacios(tarifas_doctor, nd, tam);
        }
        datos_doctor[nd] = '\0';
        datos_doctor[nd-1] = read_doc();
        nd++;
    }
    cin.get(); // cambio de linea que separa doctores de pacientes.
    
}

void incrementar_espacios(char***& datos_doctor, int& nd, int& tam) {
    tam += INC;
    if (datos_doctor == NULL) {
        datos_doctor = new char**[tam];
        datos_doctor[0] = '\0';
        nd = 1;
    } else {
        char*** aux = new char**[tam];
        for (int i = 0; i < nd; i++)
            aux[i] = datos_doctor[i];
        delete[] datos_doctor;
        datos_doctor = aux;
    }
}

void incrementar_espacios(double*& tarifas_doctor, int nd, int tam) {
    if (tarifas_doctor == NULL) {
        tarifas_doctor = new double[tam];
        tarifas_doctor[0] = -1;
    } else {
        double* aux = new double[tam];
        for (int i = 0; i < nd; i++)
            aux[i] = tarifas_doctor[i];
        delete[] tarifas_doctor;
        tarifas_doctor = aux;
    }
}

char** read_doc() {
    return NULL;
}