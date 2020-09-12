#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
float funcionSuma(float, float);
float funcionResta(float, float);
float funcionDividir(float, float);
float funcionMultiplicar(float, float);
float funcionFactorial(float);  //pongo todo esto aca por que en las librerias no me funciona

int main()
{

    int getInt(char mensaje[])
{
    int xInt;
    printf("%s", mensaje);
    scanf("%d", &xInt);

    return xInt;
}

char getChar(char mensaje[])
{
    char xChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &xChar);

    return xChar;
}

float getFloat(char mensaje[])
{
    float xFloat;
    printf("%s", mensaje);
    scanf("%f", &xFloat);

    return xFloat;
}


    float funcionSuma(float numeroUno, float numeroDos)
{
    float suma;
    suma= numeroUno+numeroDos;
    return suma;
}

float funcionResta(float numeroUno, float numeroDos)
{
    float resta;
    resta= numeroUno-numeroDos;
    return resta;
}

float funcionDividir(float numeroUno, float numeroDos)
{
    float dividir;

    if(numeroDos==0)
    {
        printf("ERROR. No se puede dividir por 0 \n");
    }
    else
    {
        dividir= numeroUno/numeroDos;
    }

    return dividir;
}

float funcionMultiplicar(float numeroUno, float numeroDos)
{
    float multiplicar;
    multiplicar= numeroUno*numeroDos;
    return multiplicar;
}
float funcionFactorial(float numero)
{
    float factorial;

    if (numero==0)
    {
        factorial= 1;
    }
    else if (numero<0)
    {
        factorial= 0;
    }
    else
    {
    factorial= numero*funcionFactorial(numero-1);
    }

    return factorial;
}



   char opcion;
   float numeroUno;
   float numeroDos;
   float ingresoNumeroUno=0;
   float ingresoNumeroDos=0;

   float suma;
   float resta;
   float division;
   float multiplicacion;
   float factorialUno;
   float factorialDos;

   do
   {
        printf("(1)Ingresar el primer numero \n");
        printf("(2)Ingresar el segundo numero \n");
        printf("(3)Calcular todas las operaciones \n");
        printf("(4)Informar resultados \n");
        printf("(5)Salir \n");

        printf("El primer numero es: %f \n", numeroUno);
        printf("El segundo numero es: %f \n", numeroDos);

        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);


        while(opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5')
        {
            printf("ERROR. Reingrese una opcion: ");
            fflush(stdin);
            scanf("%c",&opcion);
        }

        switch(opcion)
        {
        case'1':
            numeroUno= getFloat ("Ingrese su primer numero: ");
            ingresoNumeroUno=1;
            break;
            case'2':
            numeroDos= getFloat ("Ingrese su segundo numero: ");
            ingresoNumeroDos=1;
            break;
            case'3':
                if(ingresoNumeroDos==1 && ingresoNumeroUno==1)
            {
                suma= funcionSuma(numeroUno, numeroDos);
                resta= funcionResta(numeroUno, numeroDos);
                division= funcionDividir(numeroUno, numeroDos);
                multiplicacion= funcionMultiplicar(numeroUno, numeroDos);
                factorialUno= funcionFactorial(numeroUno);
                factorialDos= funcionFactorial(numeroDos);
                 if (numeroUno<0)
                {
                    printf("ERROR: No se puede realizar el factorial de un numero negativo. \n");
                }

                if (numeroDos<0)
                {
                    printf("ERROR: No se puede realizar el factorial de un numero negativo. \n");
                }

                printf("\nSe realizaron todos los calculos.");
            } else
            {
                printf("ERROR: No se ha ingresado numeros.\n");
            }
                break;
            case'4':

            printf("La suma de %f y %f es: %f \n",numeroUno,numeroDos, suma);
            printf("La resta de %d y %d es: %f \n",numeroUno,numeroDos, resta);
            printf("La division de %f y %f es: %f \n",numeroUno,numeroDos, division);
            printf("La multiplicacion de %f y %f es: %f\n",numeroUno,numeroDos, multiplicacion);
            printf("El factorial de %f es: %f \n",numeroUno, factorialUno);
            printf("El factorial de %f es: %f \n",numeroDos, factorialDos);

            break;

            case'5':
                opcion='5';
                printf("Saliendo de la aplicacion \n");
                break;
            default:
                printf("ERROR. Opcion invalida");
                break;
        }



   }
   while(opcion!='5');

    return 0;
}
