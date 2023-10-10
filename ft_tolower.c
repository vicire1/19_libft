/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:17:07 by victor            #+#    #+#             */
/*   Updated: 2023/10/10 18:19:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{	
	char c = '3';
	printf("My function : %c\nReal function : %c", ft_tolower(c), tolower(c));
}

