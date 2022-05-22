#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void converter(char a[], char b[]);

char main()
{
    char nome[50];
    printf("digite o nome do primeiro arquivo: ");
    scanf("%s", &nome);
    FILE *file = fopen (nome, "r");
    int i = 0;
    char aux[100];
    char ler[100];
    while ((ler[i] = fgetc(file)) != EOF)
    {
        i++;
    }
    ler[i] = '\0';

    converter(ler, aux);
    
    char nome1[50];
    printf("digite o nome do segundo arquivo: ");
    scanf("%s", &nome1);
    FILE *file1 = fopen(nome1, "w");
    fputs(aux, file1);

    fclose(file);
    fclose(file1);

    return 0;
}

void converter(char a[], char b[])
{
    int i = 0;
    while (a[i] != '0')
    {
        b[i] = toupper(a[i]);
        i++;
    }

    b[i] = '0';
}