#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

char main()
{
    FILE *file = arq("arquivoex13A.txt");
    char ler[100];
    char vogais[] = "aeiouAEIOU";
    int i = 0;
    char aux;
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
                aux = ler[i];
                ler[i] = '*';
            }
        }
    }

    FILE *file1 = fopen("arquivoex13B.txt", "w");
    fputs(ler, file1);

    fclose(file);
    fclose(file1);
    return 0;
}
