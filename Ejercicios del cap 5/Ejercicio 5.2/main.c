#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int ELE[5] = {0};
    int I, VOT;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
          ELE[VOT - 1]++;

          printf("\nEl voto ingresado es incorrecto.\n");
        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }
    printf("\n\nResultados de la Eleccion\n");
    for (I = 0; I < 5; I++)
    printf("\nCandidato %d: %d", I + 1, ELE[I]);

}
