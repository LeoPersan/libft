/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:37:26 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *destitation, const char *source, t_size quantity)
{
	t_size	d;
	t_size	s;

	d = 0;
	s = 0;
	while (destitation[d])
		d++;
	if (d < quantity)
	{
		while (source[s] && d + s < quantity - 1)
		{
			destitation[d + s] = source[s];
			s++;
		}
		destitation[d + s] = 0;
	}
	while (source[s])
		s++;
	if (d > quantity)
		return (quantity + s);
	return (d + s);
}
