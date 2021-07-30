/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:39:46 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:39:46 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_c;
	unsigned char	*s_c;

	s_c = (unsigned char *) s;
	c_c = (unsigned char) c;
	i = -1;
	while (++i < n)
		if (s_c[i] == c_c)
			return (s_c + i);
	return (NULL);
}
