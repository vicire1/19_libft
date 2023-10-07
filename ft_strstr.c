char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!haystack || !needle)
		return (0);
	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
