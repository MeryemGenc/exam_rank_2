#include <stdlib.h>

int ft_strchr(const char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c) 
            return 1; 
        i++;
    }
    return 0;
}

size_t ft_strcspn(const char *s, const char *reject)
{
    int i; 

    i = 0;
    while (s[i])
    { 
        if (ft_strchr(reject, s[i]))
            break;
        i++;
    }
    return i;
}

// #include <stdio.h>
// int main()
// {
//     char a[] = "zxcvbss";
//     char b[] = "adfgh";
//     printf("%lld", ft_strcspn(a, b));
//     return 0;
// }