#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables
    int I, N, NUM, SUM;
    SUM = 0;
    //le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el n�mero de datos:\t");
    //Le pedimos que nos ingrese un tipo de dato
    scanf("%d", &N);
    \
    //hacemos una operacion para abrir un bucle
    for (I=1; I<=N; I++)
    {
        //le pedimos que nos muestre un texto en pantalla
        printf("Ingrese el dato n�mero %d:\t", I);
        //Le pedimos que nos ingrese un tipo de dato
        scanf("%d", &NUM);
        //hacemos una operacion condicional
        if (NUM >  0)
            SUM = SUM + NUM;
    }
    //le pedimos que nos muestre un texto en pantalla
    printf("\nLa suma de los n�meros positivos es: %d", SUM);


    return 0;
}
