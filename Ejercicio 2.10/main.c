#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Declaramos la varianle de tipo entero
    int num;

    //Le pedimos que nos muestre un texto en pantalla
    printf("\ningrese el numero:");

    //le pedimos que nos ingrese un tipo de dato
    scanf("%d",&num);

    //hacemos una operacion condicional
    if(num==0)
    {
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nNulo");
    }
    //hacemos una operacion condicional
    else
    {
        //Le pedimos que nos muestre un texto en pantalla
        if (pow(-1,num)>0)
        {
            printf("\nPar");
        }
    }

    //Termina el programa
    return 0;
}
