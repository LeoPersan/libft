/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/04 20:45:55 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		length;

	if (!s1)
		return (NULL);
	start = -1;
	while (s1[++start])
	{
		i = 0;
		while (set[i] && s1[start] != set[i])
			i++;
		if (!set[i])
			break ;
	}
	length = ft_strlen(s1 + start);
	while (--length > 0)
	{
		i = 0;
		while (set[i] && s1[start + length] != set[i])
			i++;
		if (!set[i])
			break ;
	}
	return (ft_substr(s1, start, length + 1));
}
