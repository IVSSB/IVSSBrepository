#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaramos las variables de tipo entero y flotante
    float x;
    int y;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el valor de Y:\n");

    //Le pedimos que nos ingrese un dato
    scanf("%d",&y);

    //Hacemos una operacion condicional
    if(y<0 || y>50)
    {
        x=4/y-y;
    }

    //Hacemos una operacion condicional
    else
    {
        if(y<=25)
            x=pow(y,3) - (12);
        else
        {
            x= pow(y,2) + pow(y,3) - 18;
        }
    }

    //Le pedimos que nos muestre un texto en pantalla
    printf("\n\nY= %d\t X= %8.2f",y,x);


    return 0;
}
