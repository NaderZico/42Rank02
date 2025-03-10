#include <stdio.h>
#include <stdlib.h>

void fprime(unsigned int nb)
{
    unsigned int prime = 2;

    if (nb == 1)
        printf("1");
    
    while (nb > 1)
    {
        if (nb % prime == 0)
        {
            printf("%u", prime);
            nb /= prime;
            if (nb > 1)
                printf("*");
        }
        else
            prime++;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        fprime(atoi(argv[1]));
    }
    printf("\n");
}
