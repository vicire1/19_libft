#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n ==  -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + 48;
		write(fd, &n, 1);
	}
}
