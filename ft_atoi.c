/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:58:34 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/10 02:35:51 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v');
}

int 	ft_atoi(const char *str)
{
	int i;
	int negative;
	int num;

	i = 0;
	negative = 0;
	num = 0;
	while (ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			negative++;
		}
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
		num = (num * 10) + (*(str + i++) - 48);
	if (negative)
		num *= -1;
	return (num);
}