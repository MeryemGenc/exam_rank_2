#include <unistd.h>

int is_whitespace(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return 1;
    return 0;
}

void get_lower(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {   
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
        i++;
    }
}

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

void str_capitalizer(char *str)
{
    int i;

    i = 0;
    get_lower(str);
    while (str[i])
    {
        if (str[i] <= 'z' && str[i] >= 'a'  && ( i == 0 || is_whitespace(str[i - 1])))
            str[i] -= 32;
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    if (argc > 1)
    {
        i = 1;  
        while (i < argc)
        {
            str_capitalizer(argv[i]);
            ft_putstr(argv[i]);
            write(1, "\n", 1);
            i++;
        } 
    }
    else
        write(1, "\n", 1);
    return 0;
}


