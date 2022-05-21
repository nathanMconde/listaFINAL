#include <stdio.h>
#include <stdlib.h>
#include "arq.h"

char main()
{
  FILE *file = arq("arquivoex11.txt");
  int contador=0;
  char palavra;
  while ((palavra = fgetc(file)) != EOF)
  {
    if (palavra == 'a')
    {
      contador++;
    }
  }
  fclose(file);

  printf("O arquivo tem %d desse caractere.\n", contador);

  return 0;
}