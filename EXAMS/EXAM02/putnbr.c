#include <unistd.h>

void    ft_putnbr(int num)
{
    char res;

    if (num < 0)
    {
        write (1, "-", 1);
        num = -num;
    }
    if (num >= 10)
        ft_putnbr(num / 10);
    res = num % 10 + '0';
    write (1, &res, 1);
}

int main()
{
    ft_putnbr(100);
    write(1, "\n", 1);

    ft_putnbr(98765);
    write(1, "\n", 1);

    return 0;
}