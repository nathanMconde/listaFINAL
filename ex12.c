#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

char main()
{
    FILE *file = arq("arquivoex12.txt");
    int contador = 0;
    int i = 0;
    char ler[100];
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while ((ler[i] = fgetc(file)) != EOF)
    {
        i++;
    }
    ler[i] = '\0';

    printf("%s ", ler);
    for (int i = 0; i < strlen(ler); i++)
    {
        for (int j = 0; j < strlen(alfabeto); j++)
        {
            if (ler[i] == alfabeto[j])
            {
                contador++;
            }
        }
    }
    fclose(file);

    printf("O arquivo tem %d letras.\n", contador);

    return 0;
}