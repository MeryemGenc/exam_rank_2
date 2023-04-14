#include <unistd.h>

void print_num(int a)
{
    if (a > 9)
        print_num(a / 10);
    write(1, &"0123456789"[a % 10], 1);    
}

int main()
{
    int i;
    
    i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4); 
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else
            print_num(i);  
        i++;
        write(1, "\n", 1);
    }
    write(1, "\n", 1);
    return 0;
}