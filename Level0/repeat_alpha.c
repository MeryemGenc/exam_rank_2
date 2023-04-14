#include <unistd.h>

void    ft_write_n(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        i--;
    }
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] > 64 && argv[1][i] < 91)
            {
                ft_write_n(argv[1][i], argv[1][i] - 64);
            }
            if (argv[1][i] > 96 && argv[1][i] < 123)
            {
                ft_write_n(argv[1][i], argv[1][i] - 96);
            }
            else
                ft_write_n(argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}



