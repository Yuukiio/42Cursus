/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:33:58 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/08 04:49:16 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *buffer, int target_char, size_t buffer_size)
{
	unsigned int	i;
	char			*current_byte;
	char			search_char;

	current_byte = (char *)buffer;
	search_char = (char)target_char;
	i = 0;
	while (i++ < buffer_size)
	{
		if (*current_byte == search_char)
			return (current_byte);
		current_byte++;
	}
	return (NULL);
}
