/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:41:46 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:41:46 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	s2 = malloc(len * sizeof(char));
	while (len--)
		s2[len] = s1[len];
	return (s2);
}
