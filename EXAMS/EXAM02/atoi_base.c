#include <stdio.h>

int     convert(char c)
{
    int res = 0;
    if (c >= '0' && c <= '9')
        res = c - '0';
    if (c >= 'a' && c <= 'f')
        res = c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        res = c - 'A' + 10;
    return (res);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int num;
    int res = 0;

    while (str[i])
   {
    num = convert(str[i]);
    res = res * str_base + num;
    i++;
   } 
   return (res);
}

int main()
{
    printf("%d\n", ft_atoi_base("16", 16));
}