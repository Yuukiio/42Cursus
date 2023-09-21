/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:33:58 by abolivar          #+#    #+#             */
/*   Updated: 2023/09/15 07:33:58 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char *str = strdup("adam");
	ft_bzero(str, 3);
	printf("%s", str);
}*/
