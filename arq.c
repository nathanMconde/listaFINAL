#include <stdio.h>
#include <stdlib.h>
#include "arq.h"

FILE* arq(char x[50])
{
 return fopen(x, "r");
}

