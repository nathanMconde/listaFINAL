#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arquivoex19.txt", "w");
    char nome[50];
    int numero;
    int op;
    if (file != NULL)
    {
        do
        {

            printf("Digite nome e telefone\n");
            scanf("%s %d", &nome, &numero);
            fprintf(file, "%s %d \n", nome, numero);
            printf("\nPara encerrar digite 0, para registrar outro contato digite 1.\n");
            scanf("%d", &op);

        } while (op == 1);
    }
    fclose(file);

    return 0;
}