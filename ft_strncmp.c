/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:39:20 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size quantity)
{
	t_size	i;

	if (!quantity)
		return (0);
	i = 0;
	while (i < quantity && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	i -= (i == quantity);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
