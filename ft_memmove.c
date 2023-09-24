/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:33:58 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/15 07:33:58 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char 	*s;
	char 	*d;

	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		while (len-- > 0)
            *(d + len) = *(s + len);
	}
	else
	{
		ft_memcpy(dst, src,len);
	}
	return (dst);
}
/*int main ()
{

	printf("%s,\n",(char *)ft_memmove(strdup("asasasa"),"asdefsdc",5));
	printf("%s",(char *)memmove(strdup("asasasa"),"asdefsdc",5));
}*/
