#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return (0);
	ft_putstr_fd(s, fd);
	ft_putstr_fd('\n', fd);
}
