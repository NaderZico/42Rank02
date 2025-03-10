void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int bubble = 0;

    if(size <= 1)
        return ;
    while(bubble < size)
    {
        i = 0;
        while(i < size - 1)
        {
            if(tab[i] > tab[i + 1])
                ft_swap(&tab[i], &tab[i + 1]);
            i++;
        }
        bubble++;
    }
}

#include <stdio.h>
int main(void)
{
    int tab[] = {2, 5, 1, -5, -44, 3, 4};
    int size = 7;
    int i = 0;
    sort_int_tab(tab, size);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}