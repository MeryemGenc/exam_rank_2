unsigned char reverse_bits(unsigned char octet)
{
    int i;
    char tmp;

    i = 0;
    while (i < 8)
    {
        tmp = (tmp * 2) + (octet % 2);
        octet /= 2;
        i++;
    }
    return tmp;
}

// #include <unistd.h>
// void print_bits(unsigned char octet)
// {
//     int i;

//     i = 7;
//     while (i >= 0)
//     {
//         if ((octet >> i) & 1)
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//         i--;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a = 55;

//     print_bits(a);
//     a = reverse_bits(a);
//     printf("\n");
//     print_bits(a);
//     return 0;
// }