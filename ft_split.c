/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:32:48 by jervasti          #+#    #+#             */
/*   Updated: 2022/11/27 12:32:54 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static int	countwords(char const *s, char c)
{
	int	words;
	int	inword;
	int	i;

	i = 0;
	words = 0;
	inword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			inword = 1;
		if (inword == 1 && s[i] == c)
		{
			words++;
			inword = 0;
		}
		i++;
	}
	if (inword == 1)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	char	**array;

	words = 0;
	words = countwords(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (words--)
	{
		while (*s != '\0' && *s == c)
			s++;
		array[i] = ft_substr(s, 0, wordlen(s, c));
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
		s = s + wordlen(s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
