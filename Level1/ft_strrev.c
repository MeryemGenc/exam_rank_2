char *ft_strrev(char *str)
{
    int size;
    int i;
    char tmp;

    size = 0;
    while (str[size])
        size++;
    i = 0;
    while (i < (size / 2))
    {
        tmp = str[i];
        str[i] = str[size - i -1];
        str[size - i -1] = tmp;
    }
    return str;
}