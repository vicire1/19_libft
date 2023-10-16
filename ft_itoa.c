/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:06:39 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/16 16:00:29 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;
	int		len;

	i = 0;
	len = count_char(n);
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	a[len] = '\0';
	len--;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		a[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		a[len] = (n % 10) + 48;
		n = n / 10;
		len --;
	}
	return (a);
}
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-21483648));
}
