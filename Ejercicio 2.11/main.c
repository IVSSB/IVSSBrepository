#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y floatante
    int dis, tie;
    float bil;

    //Le pedimos que muestre un texto en pantalla
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia:\n");

    //Le pedimos que ingrese un dato
    scanf("%d,%d",&dis,&tie);

    //Hacemos una operacion condicional
    if((dis*2>500)&&(tie>10))
    {
        bil=dis*2*0.19*0.8;
    }
    //Hacemos una operacion condicional
    else
    {
        bil=dis*2*0.19;
    }

    //Le pedimos que muestre un texto en pantalla
    printf("\n\nCosto del billete: %7.2f", bil);



    return 0;
}
