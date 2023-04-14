#include <stdlib.h>

int find_length(int a)
{
    int len;

    len = 0;
    if (a <= 0)
        len++;
    while (a)
    {
        a /= 10;
        len++;
    }
    return len;
}

int reverse_int(int a)
{
    int i;
    int len = find_length(a);

    i = 0;
    while (len > 0)
    {
        i = (i * 10) + a % 10;
        a /= 10;
        len--;
    }
    return i;
}

char *ft_itoa(int nbr)
{
    char *str;
    int len;
    int i;
 
    i = 0;
    len = find_length(nbr);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;
    if (nbr < 0)
    {
        str[i] = '-';
        nbr *= -1;
        i++;
    }
    nbr = reverse_int(nbr);
    while (i < len)
    {
        str[i] = (nbr % 10) + '0';
        nbr /= 10;
        i++;
    }
    str[len] = '\0';
    return str;
}


// int main()
// {
//     // int a = 568;
//     // int a = -568;
//     // int a = 0;
//     int a = 8000;

//     char *p;
//     p = ft_itoa(a); 
//     printf("%s", p); 
//     free(p);
//     // printf("%d", reverse_int(a));
//     return 0;
// }