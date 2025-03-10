#include <unistd.h>

void putnbr(int n)
{
    if (n > 9)
        putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int ft_atoi(char *str)
{
    int num = 0;
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return num;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int i = 1;
        while(i <= 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            putnbr(num);
            write(1, " = ", 3);
            putnbr(i * num);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}
