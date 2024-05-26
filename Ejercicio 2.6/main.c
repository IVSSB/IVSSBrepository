#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y flotante
    float sal;
    int niv;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el nivel academico del profesor:\n");
    //Le pedimos que nos ingrese un tipo de dato entero
    scanf("%d",&niv);

    //Hacemos una operacion
    switch(niv)
        //Le pedimos que nos muestre un texto en pantalla
        printf("Ingrese el salario:\n");
    //le pedimos que nos ingrese un tipo de dato
    scanf("%f",&sal);

    //Hacemos una operacion
    switch(niv)
    {
    case 1:
        sal= sal*1.0035;
        break;
    case 2:
        sal= sal*1.0041;
        break;
    case 3:
        sal= sal*1.0048;
        break;
    case 4:
        sal= sal*1.0053;
        break;
    }
    //Le pedimos que nos muestre los datos en pantalla
    printf("\nNivel:%d \tNuevo salario: %8.2",niv,sal);

    //termina el programa
    return 0;
}
