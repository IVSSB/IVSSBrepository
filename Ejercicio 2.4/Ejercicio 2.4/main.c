#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos la variable de tipo floatante
    float pr, np;
    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el precio del producto\n");
    //Le pedimos que nos ingrese un tipo de dato,en este caso el precio del producto
    scanf("%f",&pr);

    //Hacemos una operacion condicional
    if (pr<1500)
    {
        //idicamos que si la condicion se cumple que haga la operacion
        np=pr*1.11;
    }
    //Hacemos otra operacion condicional
    else
    {
        np=pr*1.08;
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nNuevo precio del producto: %8.2",np);
    }
    //Termina el programa
    return 0;
}


