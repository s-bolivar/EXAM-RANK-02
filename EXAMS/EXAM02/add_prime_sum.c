int mini_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i])
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res);
}

void    mini_putnbr(int num)
{
    char res;

    if (num >= 10)
        mini_putnbr(num / 10);
    res = num % 10 + '0';
    write (1, &res, 1);
}

int find_prime(int prime)
{
    int i = 2;
    if (prime <= 1)
        return (0);
    while (i * i <= prime)
    {
        if (prime % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int prime = 2;
        int res = 0;
        int num = mini_atoi(av[1]);

        while (prime <= num)
        {
            if (find_prime(prime))
            {
                res += prime;
            }
            prime++;
        }
        mini_putnbr(res);
    }
    write (1, "\n", 1);
}