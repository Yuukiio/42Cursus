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
	ssize_t str_length;

	str_length = (ssize_t)ft_strlen(str) - 1;
	while (str_length >= 0)
	{
		if (str[str_length] == (char)character_to_find)
			return (&(((char *)str)[str_length]));
		str_length--;
	}
	return (NULL);
}
