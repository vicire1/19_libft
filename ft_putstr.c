#include <unistd.h>
#include "libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i]);
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
