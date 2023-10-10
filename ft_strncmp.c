/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:53 by victor            #+#    #+#             */
/*   Updated: 2023/10/10 18:19:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0); 
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

#include <string.h>

int	main(void)
{
	char* s1 = "salut";
	char* s2 = "sa";
	printf("%d\n%d", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
}
