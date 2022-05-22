#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arq.h"

void lerArq(FILE *ptr, char frase[]);

char main()
{
    FILE *file = arq("arquivoex15A.txt");
    char ler[100];
    lerArq(file, ler);

    FILE *file1 = fopen("arquivoex15B.txt", "a");
    fputs(ler, file1);
    fclose(file);
    fclose(file1);

    FILE *file2 = fopen("arquivoex15B.txt", "r");
    char ler1[100];
    lerArq(file2, ler1);
    
    FILE *file3 = fopen("arquivoex15C.txt", "w");
    fputs(ler1, file3);
    fclose(file);
    fclose(file1);
    return 0;
}

void lerArq(FILE *ptr, char frase[])
{
    int i = 0;
    while ((frase[i] = fgetc(ptr)) != EOF)
    {
        i++;
    }
    frase[i] = '\0';
}