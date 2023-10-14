/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:55:35 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/13 19:55:35 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    if (ptr == NULL)
        return (ptr);
    ft_bzero(ptr, size * count);
    return (ptr);
}
