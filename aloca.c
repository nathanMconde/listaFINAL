#include <stdio.h>
#include <stdlib.h>
#include "aloca.h"

int aloca(int *ptr, int tam)
{
    ptr = (int *)malloc(tam * sizeof(int));

    if (ptr == NULL)
    {
        return 0;
    }

    return 1;
}
