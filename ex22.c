#include <stdio.h>
#include <stdlib.h>;

int main()
{
    FILE *file = fopen("matriz.txt", "r");
    int i, j = 0;
    int anula = 0;

    fscanf(file, "%d %d %d", &i, &j, &anula);

    int matriz[i][j];
    int m, n = 0;

    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            matriz[m][n] = 1;
        }
    }
    int anulai, anulaj = 0;
    for (m = 0; m < anula; m++)
    {
        fscanf(file, "%d %d", &anulai, &anulaj);
        matriz[anulai][anulaj] = 0;
    }

    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            printf("%d ", matriz[m][n]);
        }
        printf("\n");
    }

    return 0;
}