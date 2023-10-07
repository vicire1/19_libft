int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{	char c = '3';

	printf("My function : %c\nReal function : %c", ft_tolower(c), tolower(c));
}

