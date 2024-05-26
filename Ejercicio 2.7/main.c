#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo flotantes
    float p,s,r;

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese las ventas de los tres vendedores\n");

    //Le pedimos que nos ingrese un tipo deto
    scanf("%f,%f,%f",&p,&s,&r);

    //Hacemos una operacion condicional
    if(p>s)
    {
        //Hacemos otra operacion condicional
        if(p>r)
        {
            //Hacemos otra operacion condicional
            if(s>r)
            {
                //Le pedimos que nos muestre un texto en pantalla
                printf("\n\nEl orden es p,s y r: %8.2f %8.2f %8.2f",p,s,r);
            }

            //Hacemos otra operacion condicional
            else
            {
                //Le pedimos que nos muestre un texto en pantalla
                printf("\n\nEl orden es p,s y r: %8.2f %8.2f %8.2f",p,r,s );
            }
        }
    }
    //Hacemos una operacion condicional
    else
    {
        //Hacemos otra operacion condicional
        if(s>r)
        {
            //Hacemos otra operacion condicional
            if(p>r)
            {
                //Le pedimos que nos muestre un texto en pantalla
                printf("\n\n El orden es s,p y r: %8.2f %8.2f %8.2f",s,p,r);
            }
            //Hacemos otra operacion condicional
            else
            {
                //Le pedimos que nos muestre un texto en pantalla
                printf("\n\nEl orden es s,r,p: %8.2f %8.2f% 8.2f",s,r,p);
            }
        }
        //Hacemos otra operacion condicional
        else
        {
            //Le pedimos que nos muestre un texto en pantalla
            printf("\n\nEl orden es r,s y p: %8.2f %8.2f %8.2f",r,s,p);
        }
    }



    return 0;
}
