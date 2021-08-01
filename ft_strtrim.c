/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/01 15:48:29 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
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
	return (ft_substr(s1, start, length + 1));
}
