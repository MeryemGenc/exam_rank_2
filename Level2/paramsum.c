#include <unistd.h>

void putnbr_mini(int a)
{
    char c;
    if (a > 9)
        putnbr_mini(a / 10);
    c = (a % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{ 
    (void)argv;
    putnbr_mini(argc - 1);
    write(1, "\n", 1);
    return 0;
}

