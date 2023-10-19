/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:12:11 by vdecleir          #+#    #+#             */
/*   Updated: 2023/10/18 14:37:07 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_lstsize(t_list *lst); // a faire
t_list	*ft_lstlast(t_list *lst); // a faire
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); // a faire
t_list	*ft_lstnew(void *content); // a faire
void	ft_lstadd_back(t_list **lst, t_list *new); // a faire
void	ft_lstclear(t_list **lst, void (*del)(void *)); // a faire
void	ft_lstdelone(t_list *lst, void (*del)(void *)); // a faire
void	ft_lstiter(t_list *lst, void (*f)(void *)); // a faire
void	ft_lstadd_front(t_list **lst, t_list *new); // a faire

#endif