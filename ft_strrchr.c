/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 01:24:11 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/23 01:24:11 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *str, int character_to_find)
{
	int	counter;

	counter =ft_strlen(str);
	while (counter >= 0)
	{
		if (str[counter] == (character_to_find))
			return ((char *)str + counter);
		counter--;
	}
	return (NULL);
}
