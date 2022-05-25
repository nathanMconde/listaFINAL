#include <stdio.h>
#include <stdlib.h>
#include "ex.h"
//Tive dificuldade em compreender a lógica final, contudo, penso que usei tudo que o enunciado solicita.
typedef struct
{
    char nome[20];
    float n1;
    float n2;
    float n3;
    float media;
} aluno;

int main()
{
    aluno al[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome do aluno:\n");
        scanf("%s", &al[i].nome);
        printf("Digite a nota 1:\n");
        scanf("%f", &al[i].n1);
        printf("Digite a nota 2:\n");
        scanf("%f", &al[i].n2);
        printf("Digite a nota 3:\n");
        scanf("%f", &al[i].n3);
    }

    for (int i = 0; i < 10; i++)
    {
        al[i].media = (al[i].n1 + al[i].n2 + al[i].n3) / 3;
    }

    int num;
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (al[i].media >= 7.0)
        {
            cont++;
        }
    }

    printf("%d alunos possuem media acima de 7.", cont);

        FILE *file = arq("arquivoex23.txt");

    for(int i=0; i<3; i++)
    {
        fprin(file, al[i].nome, al[i].media);
    }

    return 0;
}