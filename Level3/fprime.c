#include <stdlib.h>

int is_prime(int x)
{
    int i;

    i = 2;
    if (i < 2)
        return 0;    
    while (i < (x/2))
    {
        if (x % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void fprime(int num)
{
    int i;
    int flag;

    i = 2;
    flag = 0;
    while (i <= num)
    {
        if (num % i == 0)
        {
            if (is_prime(i))
            {
                if (flag == 1)
                    printf("*");
                printf("%d", i);
                num /= i;
                flag = 1;
                continue;
            }
        }
        i++;
    }
}  

int main(int argc, char **argv)
{
    int num;
    if (argc == 2)
    {
        num = atoi(argv[1]);
        if (is_prime(num) || num < 2)
            printf("%d",num);
        else
            fprime(num);
    }
    printf("\n");
    return 0;
}



