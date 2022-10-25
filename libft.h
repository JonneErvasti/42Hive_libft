/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:53:51 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/25 21:51:36 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Other allowed libraries for malloc
# include <stdlib.h>

//Part 1 - libc functions
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);

//Part 2 - Additional functions

//Part 3 - Bonus functions

//Part 4 - Own functions
int	ft_isupper(int c);
int	ft_islower(int c);

#endif
