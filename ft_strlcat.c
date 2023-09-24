/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 01:24:11 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/23 03:46:37 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len_d;
    size_t len_s;
    size_t count;

    len_d = ft_strlen(dst);
    len_s = ft_strlen(src);
    if (dstsize <= len_d)
        return (len_s + dstsize);
    count = len_d;
    while (len_d != '\0' && count < (dstsize - 1))
        *(dst + count++) = *src++;
    *(dst + count) = '\0';
    return (len_d + len_s);


}
