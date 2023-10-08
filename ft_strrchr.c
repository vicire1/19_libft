#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			a = i;
		i++;
	}
	if (a == 0)
		return (0);
	else
		return (&s[a]);
}
