#include <unistd.h>
#include <stdlib.h>

char *convert(char *temp, char c, char *str)
{
    int i = 0;
    char *res;
    int j = 0;

    while (str[i])
    {
        while (str[i] == c)
            i++;
        while (str[i] != c && str[i])
            temp[j++] = str[i++];
        temp[j] = c;
        j++;
    }
    i = 0;
    while (temp[i])
        i++;
    i--;
    while (temp[i] == c)
        i--;
    i++;
    temp[i] = '\0';
    res = malloc (sizeof(char) * i);
    j = 0;
    while (temp[j])
    {
        res[j] = temp[j];
        j++;
    }
    free (temp);
    return (res);
}

char *rostring(char *res, char c)
{
    int i = 0;
    int j = 0;
    char *ros;
    
    while (res[i])
        i++;
    ros = malloc (sizeof(char) * (i + 1));
    i = 0;
    while (res[i] != c)
        i++;
    i++;
    while (res[i])
        ros[j++] = res[i++];
    i = 0;
    ros[j] = c;
    j++;
    while (res[i] != c)
        ros[j++] = res[i++];
    ros[j] = '\0';
    return (ros);
}

int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 0;
        char *temp;
        char *res;
        int len = 0;

        while (av[1][len])
            len++;
        temp = malloc (sizeof(char) * (len + 1));
        if (!temp)
            return (0);
        res = convert(temp, ' ', av[1]);
        res = rostring(res, ' ');
        while (res[i])
        {
            write (1, &res[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}