/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:40:42 by victor            #+#    #+#             */
/*   Updated: 2023/10/18 16:39:20 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (!dst || !src)
		return (0);
	while (dst[i])
		i++;
	if (size != 0)
	{
		while (src[j] && (i + j) < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	if (ft_strlen(src) > size)
		return (len_dst + size);
	else
		return (len_dst + ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest1[7] = "Hey";
	char	dest2[7] = "Hey";
	char	src[] = "tor";
	strlcat(dest1, src, 5);
	ft_strlcat(dest2, src, 5);
	printf("%s : %s\n", dest1, dest2);
	//printf("%lu : %lu", strlcat(dest1, src, 0), ft_strlcat(dest2, src, 0));
}*/