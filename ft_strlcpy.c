/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:37:07 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/01 15:23:56 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	i = -1;
	while (src[++i])
	{
		if (i + 1 < size)
			*(dst++) = src[i];
	}
	if (size > 0)
		*dst = 0;
	return (i);
}
