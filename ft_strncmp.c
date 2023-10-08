#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0); 
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

#include <string.h>

int	main(void)
{
	char* s1 = "salut";
	char* s2 = "sa";
	printf("%d\n%d", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
}
