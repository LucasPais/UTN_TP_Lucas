#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <ctype.h>


int main()
{
   char opcion;
   int numeroUno;
   int numeroDos;
   int ingresoNumeroUno=0;
   int ingresoNumeroDos=0;

   int suma;
   int resta;
   float division;
   int multiplicacion;
   int factorialUno;
   int factorialDos;

   do
   {
        printf("(1)Ingresar el primer numero \n");
        printf("(2)Ingresar el segundo numero \n");
        printf("(3)Calcular todas las operaciones \n");
        printf("(4)Informar resultados \n");
        printf("(5)Salir \n");

        printf("\nEl primer numero es: %d \n", numeroUno);
        printf("El segundo numero es: %d \n", numeroDos);

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
            numeroUno= getc ("Ingrese su primer numero");
            ingresoNumeroUno=1;
            break;
            case'2':
            numeroDos= getc ("Ingrese su segundo numero");
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
                    printf("Alerta: No se puede realizar el factorial de un numero negativo. \n");
                }

                if (numeroDos<0)
                {
                    printf("Alerta: No se puede realizar el factorial de un numero negativo. \n");
                }

                printf("\nSe realizaron todos los calculos.");
            } else
            {
                printf("Alerta: No se ha ingresado numeros.\n");
            }
                break;
            case'4':

            printf("La suma de %d y %d es: %d \n",numeroUno,numeroDos, suma);
            printf("La resta de %d y %d es: %d \n",numeroUno,numeroDos, resta);
            printf("La division de %d y %d es: %f \n",numeroUno,numeroDos, division);
            printf("La multiplicacion de %d y %d es: %d\n",numeroUno,numeroDos, multiplicacion);
            printf("El factorial de %d es: %d \n",numeroUno, factorialUno);
            printf("El factorial de %d es: %d \n",numeroDos, factorialDos);

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
