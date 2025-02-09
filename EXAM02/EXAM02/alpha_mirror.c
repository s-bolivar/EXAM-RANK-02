char *alpha_mirror(char *str)
{
    int i = 0;
    int count;
    char res;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') 
            || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] >= 'a' && str[i] <= 'm')
            {
                count = 'z' - str[i];
                res = 'a' + count;
                write (1, (&res), 1);
            }
            if (str[i] >= 'n' && str[i] <= 'z')
            {
                count = str[i] - 'a';
                res = 'z' - count;
                write (1, (&res), 1);
            }
            if (str[i] >= 'A' && str[i] <= 'M')
            {
                count = 'Z' - str[i];
                res = 'A' + count;
                write (1, (&res), 1);
            }
            if (str[i] >= 'N' && str[i] <= 'Z')
            {
                count = str[i] - 'A';
                res = 'Z' - count;
                write (1, (&res), 1);
            }
        }
        else
            write (1, &str[i], 1);
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char    *res;
        res = alpha_mirror(av[1]);
    }
    write (1, "\n", 1);
}