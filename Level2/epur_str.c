#include <unistd.h>

int is_white_space(char c)
{
    if (c == ' ' || c == '\t')
        return 1;
    return 0;
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

int is_done(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        if (str[i] >= 33 && str[i] <= 126)
            return 0; 
        i++;
    }
    return 1;
}


int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] <= 126 && argv[1][i] >= 33)
                write(1, &argv[1][i], 1); 
            if (argv[1][i] <= 126 && argv[1][i] >= 33 && is_white_space(argv[1][i + 1]) && !is_done(argv[1] + i + 1))
                write(1, " ", 1);
            i++;
        }
    } 
    write(1, "\n", 1);
    return 0;
}