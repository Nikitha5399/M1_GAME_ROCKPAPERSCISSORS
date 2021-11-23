#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 's' && c2 == 'z')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'z')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 's')
    {
        return 0;
    }

    else if (c1 == 'z' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 'z' && c1 == 'p')
    {
        return 0;
    }
}
