#include <stdlib.h>
#include <unistd.h> 

//  wrong order!!

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    { 
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i]) 
        i++; 
    return i;
}

int is_whitespace(char c)
{
    if (c == ' ' || c == '\t')
        return 1;
    return 0;
}

int is_writeable(char c)
{
    if (c <= 126 && c >= 33)
        return 1;
    return 0;
}

char *get_clean(char *str)
{
    int i;
    int j;
    char *a;

    i = 0;
    j = 0;
    a = (char *)malloc(sizeof(char *) * (ft_strlen(str) + 1));
    if (!a)
        return NULL;
    while (str[i])
    {
        if (is_writeable(str[i]) || (j && is_whitespace(str[i]) && is_writeable(str[i + 1])))
        {
            a[j] = str[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';
    return a;
}

void print_last_word(char *str)
{ 
    int len;
 
    len = ft_strlen(str) - 1;
    while (str[len] && str[len] != ' ')
        len--;
    ft_putstr(str + len + 1);
    if (len > 0)
        str[len] = '\0';
    else
        str[0] = '\0';
}

int main(int argc, char **argv)
{
    char *p;
    if (argc > 1)
    {
        p = get_clean(argv[1]);
        print_last_word(p);
        if (p[0])
            write(1, " ", 1);
        ft_putstr(p);
        free(p);
    }
    write(1, "\n", 1);
    return 0;
}