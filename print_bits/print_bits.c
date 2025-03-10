#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char bit;
	int i = 8;
	while(i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}

int main (void)
{
    print_bits(205);
}

// 1 1 0 0 1 1 0 1

// 0 0 0 0 0 0 0 1 , i = 7

// 0 0 0 0 0 0 1 1 , i = 6

// 0 0 0 0 0 1 1 0 , i = 5

// 0 0 0 0 1 1 0 0 , i = 4

// 0 0 0 1 1 0 0 1 , i = 3

// 0 0 1 1 0 0 1 1 , i = 2

// 0 1 1 0 0 1 1 0 , i = 1

// 1 1 0 0 1 1 0 1 , i = 0

