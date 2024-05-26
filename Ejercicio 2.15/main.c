#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaramos las variables de tipo entero y flotantes
    int tra, eda, dia;
    float cos;

    //Le pdimos que nos ingrese un texto en pantalla
    printf("Ingrese tipo de tratamiento, edad y días: \n");
    //Le pedimos que nos ingrese unos datos enteros
    scanf("%d,%d,%d",&tra,&eda,&dia);

    //Le pedinmos que haga un tipo de operacion
    switch(tra)
    {
    case 1:
        cos= dia*2800;
        break;
    case 2:
        cos= dia*1950;
        break;
    case 3:
        cos= dia*2500;
        break;
    case 4:
        cos= dia*1150;
        break;
    }
    //Hacemos una operacion condicional
    if(cos != -1)
    {
        //Hacemos una operacion condicional
        if(eda>=60)
        {
            cos = cos*0.75;
        }
        //Hacemos una operacion condicional
        else
        {

            //Hacemos una operacion condicional
            if(eda<=25)
            {
                cos=cos*0.85;
            }
        }
        //Le pedimos que nos muestre un texto en pantalla
        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f",tra,dia,cos);
    }
    //hacemos otra operacion condicional
    else
    {
        //le pedimos que nos muestre un tipo de dato
        printf("\nLa clave del tratamiento es incorrecta");
    }




    return 0;
}
