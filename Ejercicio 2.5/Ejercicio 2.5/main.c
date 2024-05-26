#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaramos las variables de tipo entero y flotantes
    int op, t;
    float res;
    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese la opcion del calculo y el valor entero:\n");
    //Le pedimos que ingrese unos datos de tipo entero
    scanf("%d,%d",&op,&t);
    //hacemos una operacion
    switch(op)
    {
    case 1:
        res=t/5;
        {
            break;
        }
    case 2:
        res= pow(t,t);
        {
            break;
        }
    case 3:
        res=6*t/2;
        {
            break;
        }
    default:
        res=1;
        {
            break;
        }

    }
    //Le pedimos que nos muestre un el resultado de la operacion en pantalla
    printf("\nResultado: %7.2f", res);
    {
    }



    return 0;
}
