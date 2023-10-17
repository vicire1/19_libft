/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:15 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/17 18:05:52 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * (nmemb + 1));
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb + 1);
	return (array);
}

int	main(void)
{
	ft_calloc(6, 1);
}
