#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;

void Lectura(int *, int);
int Busca(int *, int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamanio del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);
    if (RES)
        printf("\nEl elemento se encuentra en la posici�n %d", RES);
    else

        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int K)
{
    int I = 0, BAN = 0, RES = 0;
    while (I < T && !BAN)
        if (A[I] == K)
           BAN = 1;

        else
            I++;
    if (BAN)
        RES = I + 1;

    return (RES);
}
