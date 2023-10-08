#include "libft.h"

char	*ft_strcpy(char* dst, const char* src)
{
	int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	char* dst = "hello";
	char* src = "salut";
	printf("%s", ft_strcpy(dst, src));
}
