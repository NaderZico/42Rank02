#include <stdlib.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return (char *)&s1[i];
            j++;
        }
        i++;
    }
    return NULL;
}

#include <stdio.h>
int main(void)
{
    printf("%s", ft_strpbrk("khalil", "k"));
}