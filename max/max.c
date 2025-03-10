int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	if (len == 0)
		return (0);
	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main(void)
{
	int tab[6] = {200, 90, 20, 3, 2, 460};
	printf("%d", max(tab, 6));
}