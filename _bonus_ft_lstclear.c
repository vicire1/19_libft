/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:21:26 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/25 13:23:04 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tofree;
	t_list	*current;

	current = *lst;
	if (*lst == NULL || lst == NULL || !del)
		return ;
	while (current)
	{
		tofree = current;
		current = current->next;
		ft_lstdelone(tofree, del);
	}
	*lst = NULL;
}
