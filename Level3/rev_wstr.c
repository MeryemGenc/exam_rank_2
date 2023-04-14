#include <stdlib.h>
#include <unistd.h> 

void ft_putstr_plus(char *str, int size) 
{
    int i;

    i = 0;
    while (str[i] && i <= size)
    {
        if (str[i] != ' ')
            write(1, &str[i], 1);
        i++;
    }
    if (str[0] == ' ')
        write(1, " ", 1);
}

int ft_strlen(char*str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

void rev_wstr(char *str)
{
    int len;
    int w_size; 
    w_size = 0;
    len = ft_strlen(str) - 1;
    while (len >= 0)
    {
        if (str[len] == ' ' || len == 0)
        {
            ft_putstr_plus(str + len, w_size); 
            w_size = 0;
        }
        else
            w_size++;
        len--;
    } 
}

int main(int argc, char **argv)
{ 
    if (argc == 2)
    { 
        rev_wstr(argv[1]);
    } 
    write(1, "\n", 1);
    return 0;
}


