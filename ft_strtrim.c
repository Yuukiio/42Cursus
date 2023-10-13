/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolivar <abolivar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:14:57 by abolivar          #+#    #+#             */
/*   Updated: 2023/10/12 19:14:57 by abolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strchrcmp(char c, char const *set)
{
	size_t	i;

	if (!set[0])
		return (0);
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchrcmp(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j && ft_strchrcmp(s1[j - 1], set))
		j--;
	if (i > j)
		i = 0;
	str = (char *)malloc((j - i + 1) * sizeof(char));
	if (!str)
		return (0);
	k = 0;
	while (i < j && j)
		str[k++] = s1[i++];
	str[k] = 0;
	return (str);
}
