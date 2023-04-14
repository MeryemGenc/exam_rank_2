#include <unistd.h>

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
                argv[1][i] += 32;
            }
            else if (argv[1][i] > 96 && argv[1][i] < 123)
            {
                argv[1][i] -= 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}