/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:25:22 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/28 13:58:21 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes 'n' bytes of (unsigned char)c to the string 's'.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	if (n == 0)
		return (s);
	p = (unsigned char *)s;
	while (n--)
	{
		*p = (unsigned char)c;
		if (n)
			p++;
	}
	return (s);
}
