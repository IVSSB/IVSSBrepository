#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y flotantes
    int I = 0;
    float SAL, PRO, NOM = 0;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el salario del profesor:\t");

    //Le pedimos que nos ingrese un dato
    scanf("%f", &SAL);

    //Hacemos una operacion
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        //Le pedimos que nos muestre un texto en pantalla
        printf("Ingrese el salario del profesor -0 para terminar- :\t");

        //Le pedimos que nos ingrese un dato
        scanf("%f", &SAL);
    }

    //Hacemos una operacion condicional
    while(SAL);

    PRO = NOM / I;
    //Le pedimos que nos muestre un texto en pantalla
    printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);

    return 0;
}
