/*****************************
* Fecha: 27 -02 -2025.
* Author: Ismael Santiago Forero 
* Pontificia Universidad Javeriana 
* Materia: Sistemas Operativos.
* Tema: Laboratorio de Punteros. 
*******************************/


#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf(" Uso incorrecto. Formato: %s <entero> <double1> <double2> <double3> <double4>\n", argv[0]);
        return 1;
    }

    int entero = atoi(argv[1]);     // Convertir argumento a entero
    double num1 = atof(argv[2]);    // Convertir argumento a double
    double num2 = atof(argv[3]);
    double num3 = atof(argv[4]);
    double num4 = atof(argv[5]);

    // Punteros y doble puntero
    int *pEntero = &entero;
    double *pNum1 = &num1, *pNum2 = &num2, *pNum3 = &num3, *pNum4 = &num4;
    
    realizar_calculos(pEntero, pNum1, pNum2, pNum3, pNum4);
    mostrar_resultados(pNum1, pNum2, pNum3, pNum4);
    return 0;
}

