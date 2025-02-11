#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

void rev_wstr(char *str)
{
    int len = ft_strlen(str);
    int start = len - 1;
    int end = len - 1;
    int i;

    while (start >= 0)
    {
        if (str[start] == ' ' || str[start] == '\t' || start == 0) 
        {
            if (str[start] != ' ' && str[start] != '\t')
                start--;
            i = start + 1;
            while (i <= end)
            {
                write(1, &str[i], 1);
                i++;
            }
            if (start > 0)
            write(1, " ", 1);
            end = start - 1;
        }
        start--;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        rev_wstr(argv[1]);
        write (1, "\n", 1);
    }
    else
        write (1, "\n", 1);
    return 0;
}
