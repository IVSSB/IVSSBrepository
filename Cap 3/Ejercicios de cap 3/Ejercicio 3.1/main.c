#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y flotantes
    int I;
    float SAL, NOM;
    NOM = 0;

    //Hacemos una operacion para abrir un ciclo
    for (I=1; I<=15; I++)
    {
        //le pedimos que nos muestre un texto en pantalla
        printf("\Ingrese el salario del profesor%d:\t", I);
        //Le pedimos que nos ingrese un dato
        scanf("%f", &SAL);
        //hacemos una operacion
        NOM = NOM + SAL;
    }
    //le pedimos que nos muestre un texto en pantalla
    printf("\nEl total de la nómina es: %.2f", NOM);


    return 0;
}
