/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:08 by victor            #+#    #+#             */
/*   Updated: 2023/10/18 16:39:20 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pt1;
	char	*pt2;

	i = 0;
	pt1 = (char *)dest;
	pt2 = (char *)src;
	if (!dest || !src)
		return (0);
	while (i < n)
	{
		pt1[i] = pt2[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "test1234";
	char	src[] = "1234test";

	printf("%s\n%s", ft_memcpy(dest, src, 9), memcpy(dest, src, 9));
}*/