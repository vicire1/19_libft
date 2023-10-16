/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:40 by victor            #+#    #+#             */
/*   Updated: 2023/10/16 17:10:14 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i - 1])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	int c = 0;
	char* s = "Victor"
	printf();
}
