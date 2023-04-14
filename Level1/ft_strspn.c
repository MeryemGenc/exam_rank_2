#include <stdlib.h>

int ft_strchr_plus(char *str, char c, int size)
{
    int i;

    i = 0;
    while (str[i] && (size == -1 || i < size))
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (!ft_strchr_plus(accept, s[i], -1))
            break ;
        i++;        
    }
    return i;
}