int is_power_of_2(unsigned int n)
{
    unsigned int i;

    i = 2;
    while (i <= n || n == 0)
    {
        if (i == n)
            return 1;
        i *= 2;
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", is_power_of_2(0));
//     printf("%d\n", is_power_of_2(1));
//     printf("%d\n", is_power_of_2(2));
//     printf("%d\n", is_power_of_2(3));
//     printf("%d\n", is_power_of_2(4));
//     printf("%d\n", is_power_of_2(6));
//     printf("%d\n", is_power_of_2(8));
//     printf("%d\n", is_power_of_2(128));
//     return 0;
// }