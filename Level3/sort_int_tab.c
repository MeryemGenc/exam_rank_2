void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int j;
    int tmp;

    i = 0; 
    tmp = tab[0];
    while (i < (size - 1))
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            } 
            j++;
        }
        i++;
    }
}

// #include <stdio.h>
// int main()
// {
//     int i;

//     int arr[] = {45, 25, 12, 2, 6, 78, 65, 14};
//     while (i < 8)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     i = 0;
//     sort_int_tab(arr, 8);
//     printf("\n");
//     while (i < 8)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
    
//     return 0;
// }