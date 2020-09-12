#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


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

int getint(char mensaje[])
{
    int xInt;
    printf("%s", mensaje);
    scanf("%d", &xInt);

    return xInt;
}


int funcionSuma(int numeroUno, int numeroDos)
{
    int suma;
    suma= numeroUno+numeroDos;
    return suma;
}

int funcionResta(int numeroUno, int numeroDos)
{
    int resta;
    resta= numeroUno-numeroDos;
    return resta;
}

float funcionDividir((float) numeroUno, int numeroDos)
{
    float dividir;

    if(numeroDos==0)
    {
        printf("AVISO. No se puede dividir por 0 \n");
    }
    else
    {
        dividir= numeroUno/numeroDos;
    }

    return dividir;
}

int funcionMultiplicar(int numeroUno, int numeroDos)
{
    int multiplicar;
    multiplicar= numeroUno*numeroDos;
    return multiplicar;
}



int funcionFactorial(int numero)
{
    int factorial;

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
