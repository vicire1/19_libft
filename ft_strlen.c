#include "libft.h"

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char str[20] = "salut comment ca va";
	printf("%d\n", ft_strlen(str));
	printf("%lu", strlen(str));
}
