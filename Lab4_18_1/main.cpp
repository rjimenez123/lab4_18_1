#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "my_lib.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char ***datos_doctor = NULL;
    double *tarifas_doctor = NULL;
    
    read_dataline(datos_doctor, tarifas_doctor);
    
    return 0;
}

