#include <stdlib.h>

int num_len(int n)
{
    int length;
    if(n == 0)
        return 1;
    if(n < 0)
        length = 1;
    else
        length = 0;
    while(n != 0)
    {
        n = n / 10;
        length++;
    }
    return length;
}

char *ft_itoa(int nb)
{
    int i = 0;
    int num = nb;
    int length = num_len(nb);

    char *str = malloc(sizeof(char) * length + 1);
    if(!str)
        return NULL;
    if(num < 0)
    {
        num = -num;
        str[0] = '-';
        i++;
    }
    str[length] = '\0';
    while(length-- > i)
    {
        str[length] = num % 10 + '0';
        num = num / 10;
    }
    return str;
}

#include <stdio.h>
int main(void)
{
    int n = -123451;
    char *str = ft_itoa(n);
    printf("%s", str);
}