int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *res;
    int j = 0;

    while (start + i < end)
        i++;
    res = malloc (sizeof(int) * (i + 1));
    while (start + i >= start)
    {
        res[j] = end;
        end--;
        j++;
        i--;
    }
    return (res);
}

int main()
{
    int num1 = -2;
    int num2 = 7;
    int *range = ft_rrange(num1, num2);
    int i = 0;

    while (num1 + i <= num2)
    {
        printf("%d\n", range[i]);
        i++;
    }
}