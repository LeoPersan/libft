/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:40:32 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substr, t_size quantity)
{
	t_size	h;
	t_size	n;

	h = 0;
	n = ft_strlen(substr);
	if (quantity > ft_strlen(string))
		quantity = ft_strlen(string) + 1;
	while (h + n <= quantity)
	{
		if (!ft_strncmp(&string[h], substr, n))
			return ((char *) string + h);
		h++;
	}
	return (NULL);
}
