/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/30 21:51:33 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s2;
	int		start;
	int		length;

	start = -1;
	while (s1[++start])
	{
		i = 0;
		while (set[i] && s1[start] != set[i])
			i++;
		if (!set[i])
			break;
	}
	length = 0;
	while (s1[start + length])
		length++;
	while (--length > 0)
	{
		i = 0;
		while (set[i] && s1[start + length] != set[i])
			i++;
		if (!set[i])
			break;
	}
	s2 = (char *)malloc((length + 2) * sizeof(char));
	i = -1;
	while (++i <= length)
		s2[i] = s1[start + i];
	s2[i] = 0;
	return (s2);
}
