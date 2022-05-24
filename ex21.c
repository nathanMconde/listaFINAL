#include <stdio.h>

int bin(int n);

int main()
{
    FILE *file = fopen("arquivoex21.txt", "w");
    int vetor[10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        vetor[i] = bin(3 + i);
        fprintf(file, "%d\n", vetor[i]);
    }
    fclose(file);
    return 0;
}

int bin(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return bin(n / 2) * 10 + n % 2;
}