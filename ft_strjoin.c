/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/08/08 10:56:17 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	i;
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	new_string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	while (*s1)
		new_string[i++] = *(s1++);
	while (*s2)
		new_string[i++] = *(s2++);
	new_string[i] = 0;
	return (new_string);
}
