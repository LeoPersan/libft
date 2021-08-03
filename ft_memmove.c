/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:36:43 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/31 21:14:34 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	if (dest < src)
		while (++i < n)
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	else
		while (n--)
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
	return (dest);
}
