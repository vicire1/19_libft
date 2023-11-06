/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:15 by vdecleir          #+#    #+#             */
/*   Updated: 2023/11/06 13:26:31 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	bytes;
	
	bytes = nmemb * size;
	if (nmemb != 0 && size != 0)
	{
		if (bytes / nmemb != size || bytes % nmemb != 0)
			return (NULL);
	} 
	array = malloc(bytes);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, bytes);
	return (array);
}

// int	main(void)
// {
// 	ft_calloc(9999, 9999999999);
// 	//calloc(9999, 9999999999);
// }
