/*******************************
* Fecha: 27 -02 -2025.
* Author: Ismael Santiago Forero 
* Pontificia Universidad Javeriana 
* Materia: Sistemas Operativos.
* Tema: Laboratorio de Punteros. 
*******************************/


#include <stdio.h>
#include "calculadora.h"

void realizar_calculos(int *entero, double *num1, double *num2) {
    printf("Realizando cálculos con los valores ingresados...\n");

    // ejemplo
    *num1 = (*num1) * (*num1);  // Cuadrado del número 1
    *num2 = (*num2) + (*entero); // Suma con el número entero
    *num3 = (*num3) * (*num4);  // Multiplicación entre num3 y num4
    *num4 = (*num4) / 2;
    printf("Cálculos realizados con éxito.\n");
}

void mostrar_resultados(double *resultado1, double *resultado2) {
    printf("Resultados de los cálculos:\n");
    printf("Cuadrado del primer número: %.2f\n", *resultado1);
    printf("Suma del segundo número con el entero: %.2f\n", *resultado2);
    printf("multiplicacion del tercer y cuarto numero %2f\n", *resultado3);
    printf("mitad del cuarto numero %2f\n", resultado4);
}

