/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:37:07 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *destitation, const char *source, t_size quantity)
{
	t_size	i;

	if (!source || !destitation)
		return (0);
	i = -1;
	while (source[++i])
		if (i + 1 < quantity)
			*(destitation++) = source[i];
	if (quantity > 0)
		*destitation = 0;
	return (i);
}
