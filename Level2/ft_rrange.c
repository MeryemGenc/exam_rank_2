#include <stdlib.h>

int ft_abs(int a)
{
    if (a < 0)
        return (a * -1);
    return a;
}

int *ft_rrange(int start, int end)
{
    int size;
    int i;
    int *tmp;

    size = ft_abs(start - end) + 1;
    tmp = (int *)malloc(sizeof(int) * size);
    if (!tmp)
        return 0;
    while (i < size)
    {
        tmp[i] = end;
        if (end < start)
            end++;
        else 
            end--;
        i++;
    }
    return tmp;
}

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int *x;
//     // x = ft_rrange(-1, 3);
//     x = ft_rrange(-1, -5);
//     // x = ft_rrange(0, 0);
//     while (i < 5)
//     {
//         printf("%d ", x[i]);
//         i++;
//     }
//     return 0;
// }
