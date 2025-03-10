int ft_atoi_base(const char *str, int str_base)
{
    if(str_base < 2 || str_base > 16)
        return 0;

    int digit = 0;
    int result = 0;
    int i = 0;
    int sign = 1;

    while(str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
        i++;
    
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'z')
            digit = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            digit = str[i] - 'A' + 10;
        else
            break;
        
        if(digit >= str_base)
            break;
        result = result * str_base + digit;
        i++;
    }
    return result * sign;
}

#include <stdio.h>
int main(void)
{
    printf("%d", ft_atoi_base("a", 16));
}