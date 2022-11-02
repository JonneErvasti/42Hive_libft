/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:41:33 by jervasti          #+#    #+#             */
/*   Updated: 2022/11/02 21:33:11 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len);
	if (!sub)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (NULL);
	while (i < (unsigned int)len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*subi;
	subi = ft_substr("jotaaaaaaaaaaain", 13, 4);
	printf("sub = %s\n", subi);
	subi = ft_substr("jotain", 1, 4);
	printf("sub = %s\n", subi);
	subi = ft_substr("jotain", 7, 4);
	printf("sub = %s\n", subi);
	return (0);
}*/
