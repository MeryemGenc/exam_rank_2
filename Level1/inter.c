#include <unistd.h>

int ft_strchr_plus(char *str, char c, int size)
{
    int i;

    i = 0;
    while (str[i] && (size == -1 || i < size))
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc , char **argv)
{
    int i;
    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (!ft_strchr_plus(argv[1], argv[1][i], i) && ft_strchr_plus(argv[2], argv[1][i], -1))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}