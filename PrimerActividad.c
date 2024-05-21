/**
 * @file PrimerActividad.c
 * @author Santiago Villamagua (santiago.villamagua@unl.edu.ec)
 * @brief Crear un programa que permita al usuario ingresar al menos tres variables y presentarlas en un mensaje descriptivo
 * @version 0.1
 * @date 2024-05-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

// Ingresamos las variables que se van a utilizar en el programa
int entero;
float decimal;
char caracter;

// Programa principal, el cual implementará las variables y funciones principales del programa
int main(int argc, char const *argv[])
{
    printf("Por favor ingrese un numero entero, por ejemplo: 5\n");
    scanf("%i", &entero);

    printf("Muy bien, ahora ingrese un numero decimal, por ejemplo: 4.75\n");
    scanf("%f", &decimal);

    printf("Para finalizar, ahora ingrese un caracter, por ejemplo: x\n");
    scanf(" %c", &caracter); 

    printf("El entero que ingreso fue: %i\n", entero);
    printf("El decimal que ingreso fue: %f\n", decimal);
    printf("El carácter que ingreso fue: %c\n", caracter);

    return 0;
}