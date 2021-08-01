/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:36:16 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/31 21:13:30 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_c;
	char	*src_c;

	if (!dest && !src)
		return (NULL);
	dest_c = (char *)dest;
	src_c = (char *)src;
	while (n--)
		dest_c[n] = src_c[n];
	return (dest);
}
