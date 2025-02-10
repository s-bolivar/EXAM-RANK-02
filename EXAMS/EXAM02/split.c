#include <stdio.h>
#include <stdlib.h>

int count_words(char *str, char c)
{
    int i = 0;
    int counter = 0;

    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i])
            counter++;
        while (str[i] != c && str[i])
            i++;
    }
    return (counter);   
}

char *malloc_to_str(char *str, char c, int i)
{
    int len = 0;
    char *res;
    while (str[i] != c && str[i])
    {
        len++;
        i++;
    }
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    i--;
    res[len] = '\0';
    len--;
    while (i >= 0 && str[i] != c && str[i])
    {
        res[len] = str[i];
        i--;
        len--;
    }
    return (res);    
}

char **ft_split(char *str, char c)
{
    int i = 0;
    int index = 0;
    int len = count_words(str, c);
    char **res = malloc(sizeof(char *) * (len + 1));
    if (!res)
        return (NULL);
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != c && str[i])
        {
            res[index] = malloc_to_str(str, c, i);
            index++;
        }
        while (str[i] != c && str[i])
            i++;
    }
    res[index] = NULL;
    return (res);
}

int main()
{
    int i = 0;
    char **str = ft_split("hola mundo 42 3 3 3", ' ');
    while (str[i])
    {
        printf("%s\n", str[i]);
        free (str[i]);
        i++;
    }
    free (str);
}