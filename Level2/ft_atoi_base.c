void get_lowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int ft_atoi_base(const char *str, int str_base)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '-' && str[i] == '+')
        i++;
    get_lowcase((char *)str);
    while (str[i])
    {
        res *= str_base;
        if (str[i] <= '9' && str[i] >= '0')
            res += str[i] - '0';
        else
            res += str[i] - 'W';
        i++;
    }
    return (sign * res);
}


// #include <stdio.h>

// int main(){


//     printf("%d\n", ft_atoi_base("e5", 16));
//     printf("%d\n", ft_atoi_base("745", 8));
//     printf("%d\n", ft_atoi_base("10010101", 2));
//     printf("%d\n", ft_atoi_base("10", 10));
//     return 0;
// }



