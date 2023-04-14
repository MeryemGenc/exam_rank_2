#include <stdio.h>
#include <stdlib.h> 

int find_min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int pgcd(int a, int b)
{
    int i;

    i = find_min(a, b);
    while (i > 0)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
        i--;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int a;
    int b;
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("%d", pgcd(a, b));
    }
    printf("\n");
    return 0;
}