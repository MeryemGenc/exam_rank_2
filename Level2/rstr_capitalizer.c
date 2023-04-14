#include <unistd.h>

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

void get_low(char *str)
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

int is_whitespace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
        return 1;
    return 0;
}

void rstr_capitalizer(char *str)
{
    int i;

    i = 0;
    get_low(str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z' && is_whitespace(str[i + 1]))
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
            rstr_capitalizer(argv[i]);
            ft_putstr(argv[i]);
            write(1, "\n", 1);
            i++;
        } 
    }
    else
        write(1, "\n", 1);
    return 0;
}



