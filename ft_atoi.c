int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (!str)
		return (0);
	if (str[i] == 45)
	{
		sign = -sign;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		printf("%d\n", ft_atoi(av[1]));
		printf("%d\n", atoi(av[1]));
	}
}
