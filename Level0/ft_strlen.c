#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

// #include <stdio.h>
// int main()
// {
//     char a[] = "qwertyu asdfghj";
//     printf("%d", ft_strlen(a));

//     return 0;
// }