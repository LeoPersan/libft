/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:41:46 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/07 19:51:30 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*new_string;
	int		len;

	len = ft_strlen(string) + 1;
	new_string = malloc(len * sizeof(char));
	if (!new_string)
		return (NULL);
	while (len--)
		new_string[len] = string[len];
	return (new_string);
}
