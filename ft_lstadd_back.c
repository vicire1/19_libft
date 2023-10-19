/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:20:06 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/18 16:06:57 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = &lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}
