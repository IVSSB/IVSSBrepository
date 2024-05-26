#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaramos las variables de tipo entero
    int cla, cat, ant, res;

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese la clave, categoría y antigüedad del trabajador:\n");

    //Le decimos que ingrese unos datos
    scanf("%d,%d,%d",&cla,&cat,&ant);

    //Hacemos un tipo de operacion
    switch(cat)
    {
    case 4:
        if (ant>=5)
        {
            res=1;
        }
        else
        {
            res=0;
        }
        break;


    case 2:
        if (ant>=7)
        {
            res = 1;
        }
        else
        {
            res=0;
        }

    default:
        res=0;
        break;
    }

    //Hacemos otra operacion condicional
    if(res)
    {
        //Le pedimos que nos muestre un dato en pantall
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto",cla);
    }
    else
    {
        //Le pedimos que nos muestre un dato en pantall
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto",cla);
    }

    //Termina el programa
    return 0;
}
