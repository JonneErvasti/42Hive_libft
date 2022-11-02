/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:02:42 by jervasti          #+#    #+#             */
/*   Updated: 2022/11/02 19:02:58 by jervasti         ###   ########.fr       */
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
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			nbr++;
		i++;
	}
	return (nbr);
}

char **ft_split(char const *s, char c)
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
		while (*s != '\0' && *s ==c)
			s++;
		array[i] = ft_strsub(s, 0, wordlen(s, c));
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
