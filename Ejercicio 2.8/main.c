#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos las variables de tipo entero y flotantes
    int mat, car, sem;
    float p;

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese matricula:\n");

    //le pedimos que nos muestre un dato en patalla
    scanf("%d",&mat);

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese la carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica):");

    //le pedimos que nos ingrese un tipo de dato
    scanf("%d",&car);

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese el semestre");
    scanf("%d",&sem);

    //Le pedimos que nos muestre un texto en pantalla
    printf("\nIngrese el promedio:");
    //le pedimos que nos ingrese un tipo de dato
    scanf("%f",&p);

    //Le decimos que haga una operacion
    switch(car)
    {
        case 1: if (sem>= 6&&p>=8.5){
            printf("\n%d %5.2f", mat,car,p);
            break;
        }
        case 2: if (sem>= 6&&p>=9.0){
            printf("\n%d %5.2f", mat,car,p);
            break;
        }
        case 3: if (sem>= 6&&p>=8.8){
            printf("\n%d %5.2f", mat,car,p);
            break;
        }
        case 4: if (sem>= 6&&p>=9.0){
            printf("\n%d %5.2f", mat,car,p);
            break;
        }
        //Le pedimos que nos muestre un texto en pantalla
        default: printf("\nError en la carrera");
        break;

    }


    return 0;
}
