int is_power_of_2(unsigned int n)
{
    if(n == 0)
        return 0;
    while(n % 2 == 0)
        n = n / 2;
    if(n == 1)
        return 1;
    return 0;
}

// int is_power_of_2(unsigned int n)
// {
//     return (n > 0) && ((n & (n - 1)) == 0);
// }

#include <stdio.h>

int main(void)
{
    int n = is_power_of_2(0);
    printf("%d", n);
}