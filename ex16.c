#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file = fopen("arquivoex16A.txt", "r");
    char cidade[40];
    int numero;
    int maior = 0;
    char cidades[40];
    int i = 0;

    while (fscanf(file, "%s %d", &cidade, &numero) != EOF)
    {
        if (numero > maior)
        {
            maior = numero;
            strcpy(cidades, cidade);
        }
    }

    printf("%s %d", cidades, maior);

    FILE *file1 = fopen("arquivoex16B", "w");
    fprintf(file1, "%s %d", cidades, maior);
    fclose(file);
    fclose(file1);

    return 0;
}