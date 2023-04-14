#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;

//     a = 5;
//     b = 13;
//     printf("a: %d\tb: %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("a: %d\tb: %d\n", a, b);

//     return 0;
// }