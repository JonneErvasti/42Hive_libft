/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:47:47 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/29 23:02:16 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	result;
	int					neg;

	result = 0;
	neg = 1;
	i = ft_skipspace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		if (result >= 9223372036854775807 + (unsigned long long)1 && neg == -1)
			return (0);
		if (result > 9223372036854775807)
			return (-1);
		i++;
	}
	return ((int)result * neg);
}
