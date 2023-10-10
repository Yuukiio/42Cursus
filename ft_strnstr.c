/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:58:34 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/09 18:58:34 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < len && *(s1 + i) != '\0')
	{
		j = 0;
		while (i + j < len && *(s1 + i + j) == *(s2 + j) && *(s2 + j) != '\0')
			j++;
		if (*(s2 + j) == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}