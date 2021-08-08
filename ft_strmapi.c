/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:19:51 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 11:00:30 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*func)(unsigned int, char))
{
	t_size	i;
	char	*new_string;

	if (!string)
		return (NULL);
	new_string = (char *) malloc((ft_strlen(string) + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	i = -1;
	while (string[++i])
		new_string[i] = func(i, string[i]);
	new_string[i] = 0;
	return (new_string);
}
