/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:17:11 by victor            #+#    #+#             */
/*   Updated: 2023/10/10 18:19:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{	char c = '2';
	
	printf("My function : %c\nReal function : %c", ft_toupper(c), toupper(c));
}
