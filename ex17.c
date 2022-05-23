#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"
int conferindo(char *palavra, char *frase);
int func(char *palavra, char *frase);

int main()
{
    FILE *file = arq("arquivoex17.txt");
    int i = 0;
    char frase[50];
    char palavra[50] = "vermelho";
    while ((frase[i] = fgetc(file)) != EOF)
    {
        i++;
    }

    frase[i] = '\0';

    printf("O numero de repeticoes eh %d\n", func("vermelho", frase));
    return 0;
}

int func(char *palavra, char *frase)
{
    int n = strlen(palavra);
    int m = strlen(frase);
    int contador = 0;
    for (int k = 0; k <= m - n; k++)
    {
        if (conferindo(palavra, frase + k) == 1)
        {
            contador++;
        }
    }
    return contador;
}

int conferindo(char *palavra, char *frase)
{
    int i = 0;
    while (palavra[i] != '\0' && palavra[i] == frase[i])
    {
        i++;
    }
    if (palavra[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}