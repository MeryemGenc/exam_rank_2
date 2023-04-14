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

int main(int argc, char **argv)
{
    int i;
    int j;
    if (argc == 3)
    {
        i = 0;
        j = 0;
        while (argv[2][j])
        {
            if (argv[2][j] == argv[1][i])
                i++;
            j++;
        }
        if (!argv[1][i])
            write(1, "1", 1);
        else 
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}


