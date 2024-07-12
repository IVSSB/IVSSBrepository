#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo flotantes
    float PAG, SPA = 0;

    //Le pedimos que nos muestres un texto en pantalla
    printf("Ingrese el primer pago:\t");

    //Le pedimos que nos ingrese un dato
    scanf("%f", &PAG);

    //Hacemos una operacion
    do
    {
    SPA = SPA + PAG;

    //Le pedimos que nos muestres un texto en pantalla
    printf("Ingrese el siguiente pago  -0 para terminar-:\t ");

    //Le pedimos que nos ingrese un dato
    scanf("%f", &PAG);
    }
    //Hacemos una operacion condicional
    while (PAG);

    //Le pedimos que nos muestres un texto en pantalla
    printf("\nEl total de pagos del mes es: %.2f", SPA);


    return 0;
}
