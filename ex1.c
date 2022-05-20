#include <stdio.h>
#include <stdlib.h>
#include "aloca.h"

int main()
{
    int *p;
    int TAM;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &TAM);
    aloca(*&p, TAM);

    printf("%p", p[0]);

    return 0;
}
