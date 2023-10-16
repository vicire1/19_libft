/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:19:00 by victor            #+#    #+#             */
/*   Updated: 2023/10/15 18:49:24 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	end(char *s1, char *set)
{
	int	len;
	int	count;

	count = 0;
	len = ft_strlen(s1);
	while (check_set(s1[len - 1], set) == 1)
	{
		len--;
		count++;
	}
	return (count);
}

int	beg(char *s1, char *set)
{
	int	i;

	i = 0;
	while (check_set(s1[i], set) == 1)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	new = malloc(sizeof(char) * (len - beg(s1, set) - end(s1, set) + 1));
	if (new == NULL)
		return (NULL);
	while (check_set(s1[i], set) == 1)
		i++;
	while (s1[i + j + end(s1, set)])
	{
		new[j] = s1[i + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
#include <stdio.h>
int	main(void)
{
	char *s1 = "Salut ca va bien toi?";
	char *set = "Salcoib?";
	printf("%s", ft_strtrim(s1, set));
}