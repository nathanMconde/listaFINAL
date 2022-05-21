#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"
void copiar(FILE *file, FILE *file2);

char main()
{
    FILE *file = arq("arquivoex13A.txt");
    char ler[100];
    char vogais[] = "aeiouAEIOU";
    int i = 0;
    char aux;
    char carac = '*';
    while ((ler[i] = fgetc(ler)) != EOF)
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
                aux = ler[i];
                ler[i] = carac;
            }
        }
    }

    FILE *file2 = fopen("arquivoex13B.txt", "w");

    while (fgets(ler, 100, file) != NULL)
    {
        fputs(ler, file2);
    }

    fclose(file);
    fclose(file2);

    return 0;
}
