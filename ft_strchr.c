#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i - 1])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	int c = 0;
	char* s = "Victor"
	printf(
}
