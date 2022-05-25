#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file = fopen("arquivoex19.txt", "w");
    char nome[50];
    int numero;

    while (file != NULL)
    {
        printf("Digite o nome do novo contato e o seu numero:\n");
        scanf("%s %d", &nome, &numero);
        if (numero != 0)
            fprintf(file, "Contato %s = %d \n", nome, numero);
        else if(numero == 0)
            {
                exit(1);
            }
    }
    fclose(file);

    return 0;
}