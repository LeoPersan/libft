/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:37:26 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:37:26 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d])
		d++;
	if (d < size)
	{
		while (src[s] && d + s < size - 1)
		{
			dst[d + s] = src[s];
			s++;
		}
		dst[d + s] = 0;
	}
	while (src[s])
		s++;
	if (d > size)
		return (size + s);
	return (d + s);
}
