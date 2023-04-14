#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char **argv)
{ 
    if (argc == 4)
    { 
        if (argv[2][0] == '+')
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
        if (argv[2][0] == '-')
            printf("%d", atoi(argv[1]) - atoi(argv[3]));
        if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
        if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
        if (argv[2][0] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
    }
    write(1, "\n", 1);
    return 0;
}