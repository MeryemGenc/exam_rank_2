#include <unistd.h>

int is_prime(int num)
{
    int i;

    i = 2;
    if (num == 2)
        return 0;
    while (i <= num/2)
    {
        if (num % i == 0)
            return 1;
        i++;
    }
    return 0;
}

int ft_atoi_mini(char *str)
{
    int i;
    int res;
    int sign;

    if (!str)
        return 0;
    i = 0;
    sign = 1;
    res = 0;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
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

    if (a < 0)
    {
        write(1, "-", 1);
        a *= -1;
    }
    if (a > 9)
        ft_putnbr_mini(a / 10);
    c = (a % 10) + '0';
    write(1, &c, 1);        
}

int main(int argc, char **argv)
{
    int num;
    int sum;
    int i;

    num = ft_atoi_mini(argv[1]);
    if (argc != 2 || !num)
        write(1, "0", 1);
    else
    {
        i = 2;
        sum = 0;
        while (i <= num)
        {
            if (!is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr_mini(sum);
    }
    write(1, "\n", 1);
    return 0;
}


