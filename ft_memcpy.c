/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:08 by victor            #+#    #+#             */
/*   Updated: 2023/10/13 18:07:26 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
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
