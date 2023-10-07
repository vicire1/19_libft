#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n ==  -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(1, "-", 1);
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
		write(1, &n, 1);
	}
}

int	main()
{
	ft_putnbr(-2147483648);
}
