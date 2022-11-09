/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:37:57 by jervasti          #+#    #+#             */
/*   Updated: 2022/11/09 19:55:21 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destsize;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	destsize = ft_strlen(dst);
	i = 0;
	if (size < destsize)
		return (size + ft_strlen(src));
	while (src[i] && (destsize + i) < (size - 1))
	{
		dst[destsize + i] = src[i];
		i++;
	}
	dst[destsize + i] = '\0';
	return (ft_strlen(src) + destsize);
}
