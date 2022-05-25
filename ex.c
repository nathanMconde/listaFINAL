#include <stdio.h>
#include <stdlib.h>
#include "ex.h"

void fprin(FILE *file, char name[20], float nota)
{
    fprintf(file, "%s tem a nota final de = %.2f\n", name, nota);
}

FILE *arq(char x[50])
{
    return fopen(x, "w");
}
