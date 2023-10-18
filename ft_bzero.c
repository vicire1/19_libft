/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:15:03 by victor            #+#    #+#             */
/*   Updated: 2023/10/18 16:39:20 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		str[n - 1] = '\0';
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "Victor";
	char t[] = "Victor";
	ft_bzero(s, 1);
	bzero(t, 1);
	printf("s0 : %c t0 : %c\ns2 : %c t2 : %c", s[0], t[0], s[1], t[1]);
}*/