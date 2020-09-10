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
    int cero=0;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);


    printf("\n ¿Que operacion desea realizar? " "\n a)Suma" "\n b)Resta" "\n c)Multiplicacion" "\n d)Divicion" "\n e)Factorizar" "\n");
    fflush(stdin);
    scanf("%c",&respuestaUno);
    while(respuestaUno!='a' && respuestaUno!='b' && respuestaUno!='c' && respuestaUno!='d' && respuestaUno!='e')
    {
        printf("ERROR. Ingrese segun corresponda " "\n a)Suma" "\n b)Resta" "\n c)Multiplicacion" "\n d)Divicion" "\n e)Factorizar" "\n");
        fflush(stdin);
      scanf("%c",&respuestaUno);
    }
    if(respuestaUno=='a')
    {
       resultado=(float)numeroUno + numeroDos;
       printf("El resultado de la suma de %d + %d es: %d",numeroUno,numeroDos,resultado);

    }else
    {
    if(respuestaUno=='b')
       {
           resultado=(float)numeroUno-numeroDos;
           printf("El resultado de la resta de %d - %d es: %d",numeroUno,numeroDos,resultado);
       }else
       {
        if(respuestaUno=='c')
        {
        resultado=numeroUno*numeroDos;
        printf("El resultado de la multiplicacion de %d * %d es: %d",numeroUno,numeroDos,resultado);
        }else
        {
        if(respuestaUno=='d')
        {
        resultado=(float)numeroUno/numeroDos;
        printf("El resultado de la divicion de %d / %d es: %d",numeroUno,numeroDos,resultado);
        }
       }
    }

    }

    if(respuestaUno=='e')
    {

    }




/*switch(resultado){
    case'a':
printf("\n El resultado de la suma es: %d" ,resultado);
    break;
    case'b':
        printf("\n El resultado de la resta es: %d",resultado);
        break;
    case'c':
            printf("\n El resultado de la multiplicacion es: %d",resultado);
            break;
    case'd':
        printf("\n El resultado de la divicion es: %d",resultado);
        break;
    case'e':
        printf("\n El resultado de la factorizacion es: %d",resultado);
        break;

    }*/


}
