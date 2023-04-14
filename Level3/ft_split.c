#include <stdlib.h>

int is_whitespace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int is_writeable(char c)
{
    return (c >= 33 && c <= 126);
}

int word_size(char *str)
{
    int i;

    i = 0;
    while (str[i] && str[i] != ' ')
        i++;
    return i;
}

int word_count(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] >= 33 && str[i] <= 126)
            if (str[i + 1] == ' ' || !str[i + 1])
                count++;
        i++;
    }
    return count;
}

char **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int flag;
    char **arr;

    i = 0;
    j = 0;
    k = 0;
    flag = 0;
    arr = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
    while (str[i])
    {
        if (is_writeable(str[i]))
        {
            if (k == 0)
            {
                arr[j] = (char *)malloc(sizeof(char) * (word_size(str + i) + 1));
                flag = 1;
            }
            arr[j][k] = str[i];
            if (!str[i + 1])
            {
                arr[j][k] = '\0';
                j++;
            }
            k++;
        }
        else 
        {
            if (flag == 1)
            {
                arr[j][k] = '\0';
                j++;
            }
            flag = 0;
            k = 0; 
        } 
        i++;
    }
    arr[j] = '\0';
    return arr;
}

// #include <stdio.h>

// int main()
// {
//     char a[] = "  asdasd         aasse rzuyzs  ";
//     // char a[] = "asdasd aasse rzuyzs";
//     char **double_p;
 
//     printf("%s\n", a);
//     double_p = ft_split(a);
//     printf("aasn\n");
//     printf("%sb\n", double_p[0]);
//     printf("%sb\n", double_p[1]);
//     printf("%sb\n", double_p[2]);
//     free(double_p);
//     return 0;
// }



