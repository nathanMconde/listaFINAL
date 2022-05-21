#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

char main()
{
    FILE *file = arq("arquivoex9.txt");
    int contador = 0;
    int i = 0;
    char ler[100];
    char vogais[] = "aeiouAEIOU";
    while ((ler[i] = fgetc(file)) != EOF)
    {
        i++;
    }
    ler[i] = '\0';
    for (int i = 0; i < strlen(ler); i++)
    {
        for (int j = 0; j < strlen(vogais); j++)
        {
            if (ler[i] == vogais[j])
            {
                contador++;
            }
        }
    }

    fclose(file);

    printf("O arquivo tem %d vogais.\n", contador);

    return 0;
}