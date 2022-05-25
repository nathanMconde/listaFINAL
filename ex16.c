#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file = fopen("arquivoex16A.txt", "r");
    char cidade;
    char numero;
    int maior = 0;
    char cidades;

    while (fscanf(file, "%s %s", cidade, numero) != EOF)
    {
        if (atoi(numero) > maior)
        {
            maior = atoi(numero);
            cidades = cidade;
        }
    }

    printf("A maior cidade eh %s com a populaçao de %d", cidades, maior);

    fclose(file);

    return 0;
}