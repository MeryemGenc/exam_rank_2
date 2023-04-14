int ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    while ( str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign *= -1;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

// #include <stdio.h>
// int main()
// {
//     char a[] = "       +540";
//     printf("%d", ft_atoi(a));
//     return 0;
// }