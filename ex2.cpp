#include <stdio.h>
#include <stdlib.h>

void pFloat(float *p);
void pFloat(float *p, int *TAM);

int main()
{
   float *v;
   int tam;
   printf("Digite o tamanho do vetor float que deseja:\n");
   scanf("%d", &tam);

   pFloat(&*v);
   pFloat(&*v, &tam);

   return 0;
}

void pFloat(float *p)
{
   p = (float *)malloc(5 * sizeof(float));

   printf("%p", p);
}

void pFloat(float *p, int *TAM)
{
   p = (float *)malloc(*TAM * sizeof(float));

   printf(" e %p", p);
}