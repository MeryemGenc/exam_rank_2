#include <unistd.h>

int is_writeable(char c)
{
    if (c >= 33 && c <= 126)
        return 1;
    return 0;
}

int is_done(char *str)
{
    int i;

    i = 1;
    while (str[i])
    {
        if (is_writeable(str[i]))
            return 0;
        i++;
    }
    return 1;
}

void put_space()
{
    write(1, " ", 1);
    write(1, " ", 1);
    write(1, " ", 1);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (is_writeable(argv[1][i]))
                write(1, &argv[1][i], 1);
            if (is_writeable(argv[1][i]) && !is_writeable(argv[1][i + 1]) && !is_done(argv[1] + i))
                put_space();            
            i++;
        }
    } 
    write(1, "\n", 1);
    return 0;
}


