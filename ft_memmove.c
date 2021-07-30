/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:36:43 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:36:43 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_c;
	unsigned char	*dest_c;

	i = -1;
	src_c = (unsigned char *) src;
	dest_c = (unsigned char *) dest;
	if (dest_c < src_c)
		while (++i < n)
			dest_c[i] = src_c[i];
	else
		while (n--)
			dest_c[n] = src_c[n];
	return (dest);
}
