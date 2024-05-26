#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaramos las variables de tipo entero
    int t,p,n;

    //Le pedimos que muestre un texto en pantalla
    printf("Ingrese los valores de T, P, y N:\n");

    //Le pedimos que nos ingrese unos datos de tipo entero
    scanf("%d,%d,%d",&t,&p,&n);

    //Hacemos una operacion condicional
    if(p != 0)
    {
        if(pow(t/p,n)==(pow(t,n)/pow(p,n)))
        {

            //Le pedimos que muestre un texto en pantalla
            printf("\nSe comprueba la igualda");
        }
        else
        {
            //Le pedimos que muestre un texto en pantalla
            printf("\nNo se comprueba la igualdad");
        }
    }
    else
    {
        //Le pedimos que muestre un texto en pantalla
        printf("\nP tiene que ser diferente de cero");
    }

    //Termina el programa
    return 0;
}
