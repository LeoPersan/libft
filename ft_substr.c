/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:50:12 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, t_size len)
{
	t_size	i;
	char	*new_string;

	if (!string)
		return (NULL);
	i = ft_strlen(string);
	if (start > i)
		len = 0;
	else if (start + len > i)
		len = i - start;
	new_string = (char *) malloc((len + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	i = -1;
	while (++i < len)
		new_string[i] = string[start + i];
	new_string[i] = 0;
	return (new_string);
}
