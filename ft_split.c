/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:45:01 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/16 15:06:12 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_tabs(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c && s[0] != '\0')
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int	split_strlen(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i + count] != c && s[i + count])
		count++;
	return (count);
}

void	cpy_in_tab(char **tab, char const *s, char c)
{
	int	a;
	int	b;
	int	i;

	a = 0;
	i = 0;
	if (!tab)
		return ;
	while (a < count_tabs(s, c))
	{
		b = 0;
		while (s[i] == c && s[i])
			i++;
		tab[a] = malloc(sizeof(char) * (split_strlen(s, c, i) + 1));
		if (tab == NULL)
			return ;
		while (s[i] && s[i] != c)
		{
			tab[a][b] = s[i];
			b++;
			i++;
		}
		tab[a][b] = '\0';
		a++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		a;
	char	**tab;

	a = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (count_tabs(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	cpy_in_tab(tab, s, c);
	tab[count_tabs(s, c)] = 0;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int		a;
	char	**tab;

	a = 0;
	tab = ft_split("alut sa va ssuper bien ajssss si sou", 's');
	while (tab[a] != 0)
	{
		printf("%s\n", tab[a]);
		a++;
	}
}