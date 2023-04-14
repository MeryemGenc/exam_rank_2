#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *p;

    i = 0;
    while (src[i])
        i++;
    p = malloc(sizeof(char) * (1 + i));
    if (!p)
        return NULL;
    i = 0;
    while (src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return p;
}