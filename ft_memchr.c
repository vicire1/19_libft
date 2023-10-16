/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:42:27 by victor            #+#    #+#             */
/*   Updated: 2023/10/16 17:08:22 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (!s)
		return (0);
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
