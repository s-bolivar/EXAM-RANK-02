#include <stdio.h>
#include <stdlib.h>

int len_num(int num)
{
    int counter = 0;

    if (num == 0)
        return (1);
    if (num < 0)
    {
        num *= -1;
        counter++;
    }
    while (num > 0)
    {
        num /= 10;
        counter++;
    }

    return (counter);
}

char *convert(char *str, long num, int len)
{
    str[len] = '\0';
    len--;
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        str[len] = num % 10 + '0';
        len--;
        num /= 10;
    }
    return (str);
}

char *itoa(int nbr)
{
    int len;
    long num = nbr;
    char *str;
    char *res;

    len = len_num(num);
    str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return (NULL);
    res = convert(str, num, len);
    return (res);
}

int main()
{
    printf("%s\n", itoa(5432543));
}