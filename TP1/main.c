#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    char suma;
    char resta;
    char divicion;
    char multiplicacion;
    char factorizacion;
    char respuestaUno;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("\n¿Que desea hacer acontinuacion?" "\n a)Ingresar otro numero " "\n b)Salir " "\n ");
    fflush(stdin);
    scanf("%c",&respuestaUno);

    while(respuestaUno !='a' && respuestaUno !='b')
    {
        printf("\n ERROR.Reingrese que operacion desea hacer ""\n a)Ingresar otro numero " "\n b)Salir " "\n ");
        fflush(stdin);
        scanf("%c",&respuestaUno);
    }

    if(respuestaUno=='a')
    {
        printf("Ingrese otro numero: ");
        scanf("%d",&numeroDos);
    }



    printf("\n El resultado es %d:" ,resultado);



}
