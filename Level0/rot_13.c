#include <unistd.h>

void    rot13_print(char c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        if (c < 78 || (c > 96 && c < 110))
            c += 13;
        else
            c -= 13;
    }
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            rot13_print(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}