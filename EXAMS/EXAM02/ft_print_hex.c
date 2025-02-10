int mini_atoi(char *av)
{
    int i = 0;
    int res = 0;

    while (av[i])
    {
        res *= 10;
        res += av[i] - '0';
        i++;
    }
    return (res);
}

int convert(int num)
{
    int i = 0;
    char res[100];
    int temp;

    if (num == 0)
    {
        write (1, "0", 1);
        return (0);
    }
    while (num != 0)
    {
        temp = num % 16;
        if (temp < 10)
            res[i] = temp + '0';
        else
            res[i] = temp - 10 + 'a';
        i++;
        num /= 16;
    }
    i--;
    while (i >= 0)
    {
        write (1, &res[i], 1);
        i--;
    }
    return (0);
}

int main(int ac, char **av)
{
    int res;

    if (ac == 2)
    {
        res = convert(mini_atoi(av[1]));
    }
    write (1, "\n", 1);
}