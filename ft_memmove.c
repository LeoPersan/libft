/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:36:43 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destitation, const void *source, t_size quantity)
{
	t_size	i;

	if (!destitation && !source)
		return (NULL);
	i = -1;
	if (destitation < source)
		while (++i < quantity)
			((char *) destitation)[i] = ((char *) source)[i];
	else
		while (quantity--)
			((char *) destitation)[quantity] = ((char *) source)[quantity];
	return (destitation);
}
