/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:50:12 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/01 15:36:29 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	i = ft_strlen(s);
	if (start > i)
		len = 0;
	else if (start + len > i)
		len = i - start;
	s1 = malloc(len + 1 * sizeof(char));
	if (!s1)
		return (NULL);
	i = -1;
	while (++i < len)
		s1[i] = s[start + i];
	s1[i] = 0;
	return (s1);
}
