#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;

    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        res = (res * 10) + str[i] - '0';
        i++;
    }
    return (res * sign);
}

void ft_putnbr_mini(int a)
{
    char c;
    if (a > 9)
        ft_putnbr_mini(a / 10);
    c = (a % 10) + '0';
    write(1, &c, 1);
}

void tab_mult(int x)
{
    int i;

    i = 1;
    while (i < 10)
    {
        ft_putnbr_mini(i);
        write(1, " ", 1);
        write(1, "x", 1);
        write(1, " ", 1);
        ft_putnbr_mini(x);
        write(1, " ", 1);
        write(1, "=", 1);
        write(1, " ", 1);
        ft_putnbr_mini(x * i);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int num;

    num = 0;
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        num = ft_atoi(argv[1]);
        tab_mult(num);
    }
    return 0;
}








