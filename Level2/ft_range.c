#include <stdlib.h>

int ft_abs(int a)
{
    if (a < 0)
        return (a * -1);
    return a;
}

int *ft_range(int start, int end)
{
    int size;
    int *tmp;
    int i;

    size = ft_abs(start - end) + 1;
    tmp = (int *)malloc(sizeof(int) * size);
    if (!tmp)
        return 0;
    while (i < size)
    { 
        tmp[i] = start;
        if (start < end)
            start++;    
        else 
            start--;    
        i++;
    }
    return tmp;
}

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int *x;
//     // x = ft_range(-1, 3);
//     // x = ft_range(-1, -5);
//     x = ft_range(0, 0);
//     while (i < 5)
//     {
//         printf("%d ", x[i]);
//         i++;
//     }

//     return 0;
// }
