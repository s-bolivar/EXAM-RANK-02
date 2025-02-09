int max(int *tab, unsigned int len)
{
    int i = 0;
    int max = tab[0];

    while (i < len)
    {
        i++;
        if (max < tab[i])
            max = tab[i];
    }
    return (max);
}

int main()
{
    int tab[] = {9, 6, 10};
    int len = sizeof(tab) / sizeof(tab[0]);

    printf("El número más grande del arreglo es: %d\n", max(tab, len));
    return 0;
}