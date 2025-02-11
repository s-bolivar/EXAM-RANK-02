void sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;
    int temp;

    while (i < size - 1)
   {
    j = 0;
    while (j < size - 1)
    {
        if (tab[j] > tab[j + 1])
        {
            temp = tab[j];
            tab[j] = tab[j + 1];
            tab[j + 1] = temp;
        }
        j++;
    }
    i++;
   } 
}

int main()
{
    int i = 0;
    int tab[] = {1, 5, 2, 6, 2, 6, 3, 9, 8};
    int size = sizeof(tab) / sizeof(tab[0]);

    sort_int_tab(tab, size);
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}
