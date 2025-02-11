int     *ft_range(int start, int end)
{
    int i = 0;
    int j = 0;

    while (start + i <= end)
        i++;
    int *res;
    res = malloc (sizeof(int) * (i + 1));
    while (j < i)
    {
        res[j] = start;
        start++;
        j++;
    }
    return (res);
}

int main()
{
    int num1 = -1;
    int num2 = 7;
    int *range = ft_range(num1, num2);
    int i = 0;
    int len = sizeof(range) / sizeof(range[0]);
    while (num1 + i <= num2)
    {
        printf("%d\n", range[i]);
        i++;
    }
}