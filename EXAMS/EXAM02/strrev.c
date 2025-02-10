#include <stdio.h>
#include <string.h>
char *strrev(char *str)
{
    char temp;
    int i = 0;
    int j = 0;

    while (str[j])
        j++;
    j--;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return (str);
}

int main()
{
    char str[] = "hola mundo";
    printf("%s\n", strrev(str));
}