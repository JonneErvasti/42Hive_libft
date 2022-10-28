/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:03:52 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/28 14:04:07 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_bzero() function writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
**	following code does not segfault when null params is sent
**
**	void	ft_bzero(void *s, size_t n)
**	{
**		size_t			i;
**		unsigned char	*c;
**		if (n != 0)
**		{
**			i = 0;
**			c = (unsigned char *)s;
**			if (s)
**			{
**				while (i < n)
**					c[i++] = 0;
**			}
**		}
**	}
*/
