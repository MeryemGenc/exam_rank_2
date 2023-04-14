#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
    
}

// #include <stdio.h>
// int main()
// {
//     char p1[] = "qwertyu";
//     char p2[] = "asdfghj";

//     printf("p1: %s\n", p1);
//     printf("p2: %s\n", p2);
//     printf("p: %s\n", ft_strcpy(p1, p2));
//     printf("p1: %s\n", p1);
//     printf("p2: %s\n", p2);

//     return 0;
// }