#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos la variable de tipo flotante
    float pro;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el promedio del alumno:\n");

    //Pedimos que ingresen un tipo de dato
    scanf("%f",&pro);

    //Hacemos una operacion condicional
    if(pro>=6.0) {
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nAprovando");
    }
    //Hacemos una operacion condicional
    else {
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nReprovado");
    }

    return 0;
}
