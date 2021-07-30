/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:40:32 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:40:32 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = ft_strlen(needle);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack) + 1;
	while (h + n <= len)
	{
		if (!ft_strncmp(&haystack[h], needle, n))
			return ((char *) haystack + h);
		h++;
	}
	return (NULL);
}
