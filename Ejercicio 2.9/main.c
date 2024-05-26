#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Declaramos las variables de tipo entero y flotante
    float res;
    int r, t, q;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese los valores de R, T y Q:\n");

    //le pedimos que ingrese un tipo de dato
    scanf("%d%d%d",&r,&t,&q);

    //Hacemos una operacion matematica
    res=pow(r,4) - pow(t,3) + pow(q,2);

    //Hacemos una operacion condicional
    if(res<820)
    {
        printf("\nR= %d\t T= %d\t Q= %d",r,t,q);
    }

    //Termina el programa
    return 0;
}
