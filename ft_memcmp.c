/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:40:10 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:40:10 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	i = -1;
	s1_c = (unsigned char *) s1;
	s2_c = (unsigned char *) s2;
	while (++i < n)
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
	return (0);
}
