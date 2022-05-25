#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

struct
{
    char nome;
    char dia, mes, ano;
} data;

int main()
{
    FILE *file = arq("arquivoex20.txt");
    int diaatual = 24, mesatual = 5, anoatual = 2022;

    while (file != EOF)
    {
        fscanf(file, "%s %s %s %s", data.nome, data.dia, data.mes, data.ano);
    }

    int idade = 365 * anoatual + 30 * mesatual + diaatual - 365 * atoi(data.ano) - 30 * atoi(data.mes) - atoi(data.dia);

    printf("%s possui %d anos", data.nome, idade);

    FILE *file1 = fopen("arquivoex20B.txt", "w");
    fprintf(file1, "%s %d", data.nome, idade);

    fclose(file);
    fclose(file1);

    return 0;
}