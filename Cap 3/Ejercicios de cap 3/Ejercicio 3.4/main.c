#include <stdio.h>
#include <math.h>

int main()
{
    //Declaramos las variables de tipo entero
    int NUM;
    long CUA, SUC = 0;

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese un número entero -0 para terminar-:\t");

    //Le pedimos que nos ingrese un tipo de dato
    scanf("%d", &NUM);

    //Hacemos una operacion condicional para hacer repetidamente algo
    while (NUM)
 {
    //Hacemos una operacion mientras la condicion se cumpla
    CUA = pow (NUM, 2);

    //Le pedimos que nos muestre un texto en pantalla
    printf("%d al cubo es %ld", NUM, CUA);

    SUC = SUC + CUA;
    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese un número entero -0 para terminar-:\t");

    //Le pedimos que nos ingrese un tipo de dato
    scanf("%d", &NUM);
 }
    //Le pedimos que nos muestre un texto en pantalla
    printf("\nLa suma de los cuadrados es %ld", SUC);


    return 0;
}
