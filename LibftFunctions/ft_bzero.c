/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:55:35 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/13 19:55:35 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
        str[i++] = 0;
}
