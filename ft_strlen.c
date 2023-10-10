/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:46 by victor            #+#    #+#             */
/*   Updated: 2023/10/10 18:19:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char str[20] = "salut comment ca va";
	printf("%d\n", ft_strlen(str));
	printf("%lu", strlen(str));
}
