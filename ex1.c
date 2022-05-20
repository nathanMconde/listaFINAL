#include <stdio.h>
#include <stdlib.h>
#include "aloca.h"

int main()
{
    int p;
    int TAM;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &TAM);
    aloca(&p, TAM);

    for (int i = 0; i < TAM; i++)
    {
        printf("%p \n", (p+i));
    }

    return 0;
}
