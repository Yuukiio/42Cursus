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
	char 	*s;// Puntero a char para tratar src como un arreglo de caracteres.
	char 	*d;// Puntero a char para tratar dst como un arreglo de caracteres.

	// Convierte los punteros src y dst en punteros char para trabajar con bytes.
	s = (char *)src;
	d = (char *)dst;

	//Mira si dst esta antes que src en la memoria.
	if (d > s)
	{
		//Si dst está después de src, copia desde el final al principio.
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		ft_memcpy(dst, src,len);
	}
	//Devuelve un puntero a la dirección de destino que ahora contiene la copia.
	return (dst);
}
/*int main ()
{

	printf("%s,\n",(char *)ft_memmove(strdup("asasasa"),"asdefsdc",5));
	printf("%s",(char *)memmove(strdup("asasasa"),"asdefsdc",5));
}*/
