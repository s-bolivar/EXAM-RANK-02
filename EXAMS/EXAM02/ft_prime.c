
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int num;

    i = 1;
    if (ac == 2)
    {
        num = atoi(av[1]);
        if (num == i)
            printf("1");
        i++;
        while (num != 1)
        { 
            while ((num % i) == 0)
            {
                printf("%d", i);
                if (num / i != 1)
                    printf("*");
                num /= i;
            }
            i++;
        }
    }
    printf("\n");
}