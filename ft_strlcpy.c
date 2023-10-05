/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:33:58 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/15 07:33:58 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;

	count = 0;
    if(dstsize == 0)
        return (ft_strlen(src));
    count = 0;
    while(count < dstsize - 1 && *(src + count))
    {
        *(dst + count) = *(src + count);
        count++;
    }
    *(dst + count) = '\0';
    return (ft_strlen(src));
}