
#include <stdio.h>
#include <string.h>

char* upper(char *s)
{
    char* up = s;
    for (int i = 0; i < strlen(s); i++)
    {
	up[i] = up[i] - 32;
    }
    return up;
}
