#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

int main()
{
    FILE *file = arq("arquivoex17.txt");
    char frase[100];
    char palavra[100] = "caldo";
    int contador = 0;

    while (fscanf(file, "%s", frase) != EOF)
    {
        if (strcmp(frase, palavra) == 0)
        {
            contador++;
        }
    }

    fclose(file);

    printf("A palavra se repete %d vezes", contador);

    return 0;
}
