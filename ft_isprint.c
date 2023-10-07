int	ft_isprint(int c)
{
	if (c > 30 && c < 127)
		return (1);
	else
		return (0);
}
