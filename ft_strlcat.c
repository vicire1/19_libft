/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:40:42 by victor            #+#    #+#             */
/*   Updated: 2023/10/13 18:39:51 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	while (dst[i] && i < (size - 1))
		i++;
	while (src[j] && (i + j) < (size - 1))
	{
		src[j] = dst[i + j];
		j++;
	}
	dst[i + j] = '\0';
	return (strlen(dst) + strlen(src));
}
