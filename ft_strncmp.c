/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 01:24:11 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/23 01:24:11 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *string1, const char *string2, size_t max_chars)
{
	size_t index;

	index = 0;
	while ((string1[index] || string2[index]) && index < max_chars)
	{
		if ((unsigned char)(string1[index]) == (unsigned char)(string2[index]))
			index++;
		else
		{
			if ((unsigned char)(string1[index]) < (unsigned char)(string2[index]))
				return -1;
			if ((unsigned char)(string1[index]) > (unsigned char)(string2[index]))
				return 1;
		}
	}

	return 0;
}
