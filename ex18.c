#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

void repete(char *rep, const char *str);

char main()
{
    FILE *file = arq("arquivoex18.txt");
    int contador = 0;
    char enter;
    while ((enter = fgetc(file)) != EOF)
    {
        if (enter == '\n')
        {
            contador++;
        }
    }
    fclose(file);

    FILE *file1 = arq("arquivoex18.txt");
    char ler[100];
    int i = 0;
    int contadorP = 0;
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char palavra[] = " ,.\n";

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
                contadorP++;
            }
        }
    }
    int contadorPa = 0;
    for (int i = 0; i < strlen(ler); i++)
    {
        for (int j = 0; j < strlen(palavra); j++)
        {
            if (ler[i] == palavra[j])
            {
                contadorPa++;
            }
        }
    }

    int contadorl = 0;
    char letra[100];
     for (int i = 0; i < strlen(ler); i++)
    {    letra[i] = ler[i];
        for (int j = 0; j < strlen(letra); j++)
        {
            if (letra[j] == ler[i])
            {
                contadorl++;
            }
        }
    }

    fclose(file1);

    printf("O arquivo tem %d linhas.\n", contador + 1);
    printf("O arquivo tem %d caracteres.\n", contadorP);
    printf("O arquivo tem %d palavras.\n", contadorPa);
    printf("O arquivo tem %d letras repetidas:", contadorl);

    return 0;
}
