/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:39:01 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:54:37 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (i && string[i] != (char) character)
		i--;
	if (string[i] == (char) character)
		return ((char *) string + i);
	return (NULL);
}
