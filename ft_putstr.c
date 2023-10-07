#include <unistd.h>

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		ft_putstr(av[1]);
	}
}
