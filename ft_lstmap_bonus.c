/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:58:34 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/10 16:45:53 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *o_lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!o_lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (0);
	first->content = f(o_lst -> content);
	new = first;
	while (o_lst->next)
	{
		o_lst = o_lst->next;
		new->next = malloc(sizeof(t_list));
		if (!new->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new = new->next;
		new->content = f(o_lst->content);
	}
	new->next = 0;
	return (first);
}
