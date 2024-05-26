#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos la variable de tipo flotante
    float pro;

    //Le pedimos que nos presente un texto en pantalla
    printf("Ingrese el promedio del alumno\n");

    //Le pedimos que nos ingrese un dato
    scanf("%f",&pro);


    //Hacemos una operacion concional
    if(pro>=6)
    {
        //Le volvemos a pedir que nos imprima un texto en patalla
        printf("\nAprobado");

    }


    //termina el programa
    return 0;
}
