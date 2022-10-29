/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:45:10 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/28 16:56:09 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies len bytes from string src to string dst.
** The two strings may overlap;
** the copy is always done in a non-destructive manner.
**
** The function returns the original value of dst.
**
** Printing backwards prevents the looping if copying from the dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src >= dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
