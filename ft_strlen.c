/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:32:05 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/25 21:43:09 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"
/*
** The ft_strlen() function calculates the length of the string pointed to by s,
** EXCLUDING the terminating null byte ('\0').
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
