/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:29:07 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/10 21:29:07 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	t_list	*tmp;

	if (*last)
	{
		tmp = ft_lstlast(*last);
		tmp->next = new;
	}
	else
		*last = new;
}
