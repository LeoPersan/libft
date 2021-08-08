/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:52:23 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *string, char const *set)
{
	int		i;
	int		start;
	int		length;

	if (!string)
		return (NULL);
	start = -1;
	while (string[++start])
	{
		i = 0;
		while (set[i] && string[start] != set[i])
			i++;
		if (!set[i])
			break ;
	}
	length = ft_strlen(string + start);
	while (--length > 0)
	{
		i = 0;
		while (set[i] && string[start + length] != set[i])
			i++;
		if (!set[i])
			break ;
	}
	return (ft_substr(string, start, length + 1));
}
