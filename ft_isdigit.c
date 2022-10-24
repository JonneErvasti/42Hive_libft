/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:00:53 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/24 21:01:21 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function tests if a character is a digit and returns 0 if not.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
