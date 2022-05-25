#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome;
    char dia, mes, ano;
} dat;

int main()
{
    FILE *file = fopen("arquivoex20.txt", "r");
    int diaatual = 24, mesatual = 5, anoatual = 2022;
    dat data;

    while (file != EOF)
    {
        fscanf(file, "%s %d %d %d", data.nome, data.dia, data.mes, data.ano);
    }

    int idade = 365 * anoatual + 30 * mesatual + diaatual - 365 * data.ano - 30 * data.mes - data.dia;

    printf("%s possui %d anos", data.nome, idade);

    fclose(file);

    return 0;
}