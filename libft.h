/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:53:51 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/29 23:01:54 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Other allowed libraries for malloc and write
# include <stdlib.h>
# include <unistd.h>

//Part 1 - libc functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
//Part 2 - Additional functions

//Part 3 - Bonus functions

//Part 4 - Own functions
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isspace(int c);
int		ft_skipspace(char const *str);
#endif
