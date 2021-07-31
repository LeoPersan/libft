/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:19:51 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/31 19:19:51 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s2;

	s2 = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = -1;
	while (s[++i])
		s2[i] = (*f)(i, s[i]);
	s2[i] = 0;
	return (s2);
}
