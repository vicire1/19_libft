#include <stdio.h>
#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}
