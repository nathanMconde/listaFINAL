#include <stdio.h>
#include <stdlib.h>
#include "arq.h"

char main()
{
  FILE *file = arq("arquivoex8.txt");
  int contador=0;
  char enter;
  while ((enter = fgetc(file)) != EOF)
  {
    if (enter == '\n')
    {
      contador++;
    }
  }
  fclose(file);

  printf("O arquivo tem %d linhas.\n", contador + 1);

  return 0;
}