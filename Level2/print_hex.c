#include <unistd.h>

int ft_atoi_mini(char *str)
{
    int i;
    int res;
    
    i = 0;
    res = 0;
    while (str[i])
    {
        res = (res * 10) + str[i] - '0';
        i++;
    }
    return res;
}

void print_hex(int x)
{
    char hex[] = "0123456789abcdef"; 
    if (x >= 16)
        print_hex(x / 16);
    write(1, &hex[x % 16], 1); 
    if (x == 0)
        return ;
}

int main(int argc, char **argv)
{ 
    int num;
    if (argc == 2)
    { 
        num = ft_atoi_mini(argv[1]);
        print_hex(num);
    }
    write(1, "\n", 1);
    return 0;
}

