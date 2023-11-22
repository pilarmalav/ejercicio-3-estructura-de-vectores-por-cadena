/*
 * estructura de un vector.c
 *
 *  Created on: 22 nov 2023
 *      Author: PILAR
 */
#include "persona.h"
#include<stdio.h>

 void pedirnombre(persona *per){

    	puts("introduce el nombre");
    	fflush(stdout);
    	scanf("%s", per->nombre);

    	puts("introduce el apellido");
    	fflush(stdout);
    	scanf("%s", per->apellido);

    	puts("introduce la edad");
    	fflush(stdout);
    	scanf("%d", &(per->edad));
    }

 	 void mostrarnombre(persona per)
 	 {
 		 printf("Nombre: %s ", per.nombre);

 		 printf("apellido:  %s ", per.apellido);

 		 printf("edad:  %d", per.edad);
 	 }


 	void mostrarFraccion(fraccion f){
 		printf("Nombre: %d ", f.numerador);
 		printf("apellido:  %d ", f.denominador);
 	}


 	void pedirFraccion(fraccion * f){
	 {
		 puts("introduce el numerador");
		 fflush(stdout);
		 scanf("%s", f->numerador);

		 puts("introduce el denominsdor");
		 fflush(stdout);
		 scanf("%s", f->denominador);
	 }

 	    fraccion multiplicar(fraccion f1, fraccion f2){
 	    	fraccion f3;

 	    	f3.numerador=f1.numerador*f2.numerador;
 	    	f3.denominador=f1.denominador*f2.denominador;

 	    	return f3;
 	    }
 	    fraccion division(fraccion f1, fraccion f2);











 }




