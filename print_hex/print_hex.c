#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;
    while(str[i] >= '0' && str[i] <= '9')
        result = result * 10 + str[i++] - '0';
    return result;
}

void ft_print_hex(int n)
{
    if(n > 15)
        ft_print_hex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int num = ft_atoi(argv[1]);
        ft_print_hex(num);
    }
    write(1, "\n", 1);
    return 0;
} 