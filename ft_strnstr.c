/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:40:32 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/28 20:40:32 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] != needle[j])
			i++;
		else
		{
			while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return (haystack + i);
		}
	}
	return (NULL);
}
