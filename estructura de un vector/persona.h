/*
 * estructura de un vector.h
 *
 *  Created on: 22 nov 2023
 *      Author: PILAR
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#define MAXIMONOMBRE 25
#define MAXIMOAPELLIDO 45
#define MAXIMONUMERADOR 30
#define MAXIMODENOMINADOR 30


    typedef struct{
    	char nombre[MAXIMONOMBRE];
    	char apellido[MAXIMOAPELLIDO];
    	int edad;


    }persona;

    void pedirnombre(persona *N);

    void mostrarnombre(persona per);



   typedef struct{
        int numerador;
        int denominador;
   }fraccion;







    void mostrarFraccion(fraccion f);
    void pedirFraccion(fraccion * f);

    fraccion multiplicar(fraccion f1, fraccion f2);
    fraccion division(fraccion f1, fraccion f2);






#endif /* PERSONA_H_ */
