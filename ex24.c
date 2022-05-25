#include <stdio.h>
#include <stdlib.h>

void calc(int jogador, int votos);
int main()
{
    int votos[23];
    int num;
    int numVotos = 0;

    for (int i = 0; i < 23; i++)
    {
        votos[i] = 0;
    }

    while (num != 0)
    {
        printf("Digite o numero em que deseja votar:\n");
        scanf("%d", &num);
        if (num > 23)
        {
            printf("Numero invalido.");
        }
        if (num == 0)
        {
            break;
        }
        numVotos++;
        votos[num]++;
    }
    printf("Houveram %d votos\n", numVotos);
    int maior = 0;
    int maiorVotos = 0;
    for (int i = 0; i < 23; i++)
    {
        printf("camisa %d, obteve %d votos.\n", i, votos[i]);
        if (votos[i] > maior)
        {
            maior = i;
            maiorVotos = votos[i];
        }
    }

    printf("O melhor jogador foi o camisa %d, com %d votos,", maior, maiorVotos);
    calc(maiorVotos,numVotos);


    return 0;
}

void calc(int jogador, int votos)
{
    int result = (jogador / votos) * 100;
    printf(" correspondendo a %d por cento do total.", result);
}