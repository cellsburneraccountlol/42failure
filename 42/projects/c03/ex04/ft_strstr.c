char *ft_strstr(char *str, char *to_find)
{
    char *a;
    char *b;

    if (*to_find == '\0')
        return str;

    while (*str)
    {
        a = str;
        b = to_find;

        while (*a == *b || *b == '\0')
        {
            if (*b == '\0')
                return a;
            a++;
            b++;
        }
        
        str++;
    }

    return 0;
}
