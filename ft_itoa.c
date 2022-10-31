/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:47:52 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/31 20:06:54 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_numlen(int n, size_t add)
{
	size_t	c;

	c = 0 + add;
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static void	set_the_record_straight(size_t len, char *str, int nega, int n)
{
	while (0 < len)
	{
		str[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	str[len] = n + '0';
	if (nega != 1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		nega;

	len = 0;
	nega = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		nega = -1;
		n = n * -1;
		len++;
	}
	len = count_numlen(n, len);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	set_the_record_straight(len, str, nega, n);
	return (str);
}
