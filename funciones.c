/**
 * Nombre: funciones.c
 * Objetivo: muestra las funciones en ansi c
 * Autor: Adrian Manuel Robles Jiménez
 * Fecha: 06/08/2020
 */

# include <stdio.h>
# include <string.h>

/**
 * Función para regresar un mensaje
 */

char* getMessage()
{
    return "hola mundo";
}

int suma(int n1, int n2)
{
    return n1+n2;
}

int resta(int n1, int n2)
{
    return n1-n2;
}

int main()
{
    printf("El mensaje es: %s\n", getMessage());
    printf("La suma es: %d\n", suma(2,5));
    printf("La resta es: %d\n", resta(22,-5));
    return 0;
}