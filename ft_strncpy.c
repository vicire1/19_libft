#include <stdio.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
