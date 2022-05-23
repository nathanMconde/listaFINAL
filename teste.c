#include <stdio.h>
#include <string.h>

int conferindo(char *palavra, char *frase);
int func(char *palavra, char *frase);

int main(){
    printf("O numero de repetiçoes eh %d\n", func("ana", "ana gosta de comer banana"));
    return 0;
}
int func(char *palavra, char *frase)
{
    int n = strlen(palavra);
    int m = strlen(frase);
    int contador = 0;
    for (int k = 0; k <= m-n; k++)
    {
        if (conferindo(palavra, frase + k) == 1)
        {
            contador++;
        }
    }
    return contador;
}

int conferindo(char *palavra, char *frase)
{
    int i = 0;
    while (palavra[i] != '\0' && palavra[i] == frase[i])
    {
        i++;
    }
    if (palavra[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}