#include <unistd.h>

void putnbr(int n)
{
    if(n > 9)
        putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int argc, char *argv[])
{
        putnbr(argc - 1);
        write(1, "\n", 1);
}