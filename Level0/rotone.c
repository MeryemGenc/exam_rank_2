#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == 90 || argv[1][i] == 122)
                argv[1][i] -= 25;
            if ((argv[1][i] > 64 && argv[1][i] < 90) || (argv[1][i] > 96 && argv[1][i] < 122))
                argv[1][i] += 1;
            write(1, &argv[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}