/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoperei <leopso1990@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:51:33 by leoperei          #+#    #+#             */
/*   Updated: 2021/07/31 18:02:57 by leoperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_until(char const *str, char end, unsigned int equal)
{
	size_t	qty;

	qty = -1;
	while (str[++qty])
		if ((equal && str[qty] != end)
			|| (!equal && str[qty] == end))
			return (qty);
	return (qty);
}

static size_t	ft_count_words(char const *str, char delimiter)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = ft_count_until(str, delimiter, 1);
	while (str[i])
	{
		words++;
		i += ft_count_until((str + i), delimiter, 0);
		i += ft_count_until((str + i), delimiter, 1);
	}
	return (words);
}

static void	*ft_clean_matrix(void **matrix)
{
	size_t	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	int		words;
	int		word_size;
	char	**strings;

	words = ft_count_words(s, c);
	strings = (char **) ft_calloc((words + 1), sizeof(char *));
	if (!strings)
		return (NULL);
	i = ft_count_until(s, c, 1);
	word = -1;
	while (++word < words)
	{
		word_size = ft_count_until((s + i), c, 0);
		strings[word] = (char *) malloc(sizeof(char) * (word_size + 1));
		if (!strings[word])
			return (ft_clean_matrix((void **)strings));
		ft_strlcpy(strings[word], (s + i), (word_size + 1));
		i += word_size + ft_count_until((s + i + word_size), c, 1);
	}
	return (strings);
}
