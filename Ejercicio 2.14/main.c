#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y floatantes
    int cla, tie;
    float cos;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingresa la clave y el tiempo:\n");

    //Le pedimos que nos ingrese unos datos
    scanf("%d,%d",&cla,&tie);

    //Hacemos una operacion
    switch(cla)
    {
    case 1:
        cos= tie*0.13/60;
        break;
    case 2:
        cos= tie*0.11/60;
        break;
    case 5:
        cos= tie*0.22/60;
        break;
    case 6:
        cos= tie*0.19/60;
        break;
    case 9:
        cos= tie*0.17/60;
        break;
    case 10:
        cos= tie*0.20/60;
        break;
    case 15:
        cos= tie*0.39/60;
        break;
    case 20:
        cos= tie*0.28/60;
        break;
    default:
        cos= -1;
        break;
    }

    //Hacemos una operacionn condicional
    if(cos != -1)
    {
        //Le pedimos que nos muestre un texto en pantalla
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f",cla,tie,cos);
    }
    //Hacemos una operacion condicional
    else
    {
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nError en la clave");
    }


    //Termina el programa
    return 0;
}
