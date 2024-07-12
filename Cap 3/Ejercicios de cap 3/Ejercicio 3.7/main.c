#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y flotantes
    int I, N;
    float LAN, SLA = 0;

    //Hacemos una operacion
    do
    {
        //Le pedimos que muestre un texto en pantalla
        printf("Ingrese el número de lanzamientos:\t");

        //Le pedimos que ingrese un tipo de dato
        scanf("%d", &N);
    }
    //Hacemos una operacion condicional
        while(N < 1 | | N > 11)
    {
        //Hacemos una operacion condicional
        for(I=1; I<=N; I++)
            //Le pedimos que muestre un texto en pantalla
            printf("\nIngrese el lanzamiento %d:", I);

        //Le pedimos que ingrese un tipo de dato
        scanf("%f", &LAN);
        SLA = SLA + LAN;


        SLA = SLA / N;

        //Le pedimos que muestre un texto en pantalla
        printf("\nEl promedio de lanzamientos es: %.2f", SLA);
    }




    return 0;
}
