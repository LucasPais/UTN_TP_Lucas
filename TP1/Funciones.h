#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** \brief Pide un numero y lo muestra
 *
 * \param Mensaje a mostrar
 *
 * \return Numero ingresado
 *
 */

int getInt(char mensaje[]);

/** \brief Pide un numero y lo muestra
 *
 * \param Mensaje a mostrar
 *
 * \return Numero ingresado
 *
 */

 int getInt(char mensaje[]);

 /** \brief Pide un caracter y devuelve un resultado
 *
 * \param mensaje que será mostrado
 * \return caracter ingresado
 */
char getChar(char mensaje[]);

/** \brief Devuelve la suma de los numeros ingresados por el usuario
 *
 * \param int pide el primer numero
 * \param int pide el segundo numero
 * \return retorna la suma
 *
 */
int funcionSuma(int, int);

/** \brief Devuelve la resta de dos numeros ingresados
 *
 * \param int pide el primer numero
 * \param int pide el segundo numero
 * \return retorna la resta
 *
 */
int funcionResta(int, int);


/** \brief Devuelve la division de dos numeros ingresados
 *
 * \param int pide el primer numero
 * \param int pide el segundo numero
 * \return retorna la division
 *
 */
float funcionDividir(int, int);


/** \brief Devuelve la multiplicacion de dos numeros ingresados
 *
 * \param int pide el primer numero
 * \param int pide el segundo numero
 * \return retorna la multiplicacion
 *
 */
int funcionMultiplicar(int, int);


/** \brief Devuelve el factorial de un numero ingresado
 *
 * \param int Pide un numero
 * \return int Retorna el factorial
 *
 */
int funcionFactorial(int);



#endif // FUNCIONES_H_INCLUDED
