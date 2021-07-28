/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:37:26 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:37:26 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	while (*dst)
		dst++;
	i = 0;
	while (src[i] && i < size)
		dst[i] = src[i++];
	while (i <= size)
		dst[i++] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i);
}
