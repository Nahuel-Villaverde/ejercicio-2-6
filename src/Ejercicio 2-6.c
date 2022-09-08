/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Nahuel Villaverde Guzman
 Version     : (Entradas, procesos y salidas) Ejercicio 2-6
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

    char caracter;

    for (int i = 1; i <= 5; i++)
    {
    	fflush(stdin);
    	printf("Ingrese un caracter: ");
    	scanf("%c",&caracter);
    	if(caracter >= 'a' && caracter <= 'z')
    	{
    		printf("Es minuscula %c\n", caracter);
    	}
    	else
    	{
    		if(caracter >= 'A' && caracter <= 'Z')
    		{
    			printf("Es mayuscula %c\n", caracter);
    		}
    	}

    }
    return 0;
}
