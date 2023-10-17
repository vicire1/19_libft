/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:40 by victor            #+#    #+#             */
/*   Updated: 2023/10/17 14:53:20 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (!s)
		return (0);
	while (s[i - 1])
	{
		if (s[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[] = "salut";
	printf("%s\n%s", ft_strchr(s, 's'), strchr(s, 's'));
}
