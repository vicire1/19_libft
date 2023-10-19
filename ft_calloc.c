/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:15 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/19 16:54:22 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	array = malloc(size * (nmemb));
	if (array == NULL)
		return (NULL);
	ft_bzero(array, size * nmemb);
	return (array);
}
/*
int	main(void)
{
	ft_calloc(6, 1);
}
*/