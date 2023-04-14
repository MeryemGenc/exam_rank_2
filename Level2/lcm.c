unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i;
    unsigned int j;

    i = 1; 
    while (i <= b)
    {
        j = 1;
        while (j <= a)
        { 
            if ((a * i) == (b * j))
                return (a * i);
            j++;
        }
        i++;
    } 
    return 0;
}

// int main()
// {
//     printf("%d", lcm(10,2));
//     return 0;
// }
