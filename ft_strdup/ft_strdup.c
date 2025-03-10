#include <stdlib.h>
char *ft_strdup(char *s1)
{
    int i = 0;
    while(s1[i])
        i++;
    char *str = malloc(sizeof(char) * i + 1);
    if(!str)
        return NULL;
    i = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return str;
}