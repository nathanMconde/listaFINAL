#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

int main()
{
    FILE *file = arq("arquivoex20.txt");
    int diaatual = 24, mesatual = 5, anoatual = 2022;
    int dia, mes, ano;
    char nome[20];

    fscanf(file, "%s %d %d %d", nome, &dia, &mes, &ano);
    printf("%s %d %d %d\n", nome, dia, mes, ano);

    int idade = 365 * anoatual + 30 * mesatual + diaatual - 365 * ano - 30 * mes - dia;

    ano = idade / 365;
    idade = idade % 365;

    mes = idade / 30;
    idade = idade % 30;

    dia = idade;

    FILE *file1 = fopen("arquivoex20B.txt", "w");
    fprintf(file1, ("%s possui %d dias %d meses e %d anos"), nome, dia, mes, ano);

    fclose(file);
    fclose(file1);
    return 0;
}