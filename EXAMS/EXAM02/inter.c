int main(int ac, char **av)
{
    int i = 0;
    int j;
    char found[256] = {0};

    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] && !found[(unsigned char) av[1][i]])
                {
                    found[(unsigned char) av[1][i]] = 1;
                    write (1, &av[1][i], 1);
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}