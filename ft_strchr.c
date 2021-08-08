/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:38:37 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/07 19:42:21 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int character)
{
	int	i;

	i = 0;
	while (string[i] && string[i] != (char) character)
		i++;
	if (string[i] == (char) character)
		return ((char *) string + i);
	return (NULL);
}
