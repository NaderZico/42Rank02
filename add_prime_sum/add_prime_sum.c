#include <unistd.h>

int	ft_atoi(const char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	is_prime(int num)
{
	int i;

	if (num < 2)
		return (0);
    if(num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;
	i = 3;
	while (i * i <= num)
	{
		if (i % num == 0)
			return (0);
		i+=2;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	if(n > 9)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	int num;
	int sum;
	int i;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	num = ft_atoi(argv[1]);
	if (num <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	sum = 0;
	i = 2;
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
