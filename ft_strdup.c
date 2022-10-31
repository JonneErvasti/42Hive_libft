/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:45:38 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/31 19:49:56 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		length;
	char	*pointer;

	length = 0;
	while (src[length])
		length++;
	pointer = (char *)malloc(sizeof(*pointer) * (length + 1));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
