#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    //Delclaramos las variables de tipo flotantes
    float PAG, SPA;
    SPA = 0;

    //Le pedimos que nos muestre un texto en pantalla
    printf("Ingrese el primer pago:\t");
    //Le pedimos que ingrese un tipo de dato
    scanf("%f", &PAG);

    //Hacemos una operacion
    while (PAG)

 {
     //Hacemos una operaicon
 SPA = SPA + PAG;
   //Le pedimos que nos muestre un texto en pantalla
   printf("Ingrese el siguiente pago:\t ");
   //Le pedimos que ingrese un tipo de dato
   scanf("%f", &PAG);

 }
   //Le pedimos que nos muestre un texto en pantalla
   printf("\nEl total de pagos del mes es: %.2f", SPA);


  return 0;
 }
