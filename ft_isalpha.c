/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:51:14 by jervasti          #+#    #+#             */
/*   Updated: 2022/10/24 15:11:36 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*¬
** The·ft_isalpha()·function·tests·for·any·character·for·which·ft_isupper·or¬
**·ft_islower·is·true.·The·value·of·the·argument·must·be·representable·as·an¬
**·unsigned·char·or·the·value·of·EOF.¬
**¬
**·The·ft_isalpha()·function·returns·zero·if·the·character·tests·false·and
** returns·non-zero·if·the·character·tests·true.¬
**¬
**·→RISK:·FUNCTION·WILL·NOT·RETURN·THE·ARGUMENT!¬
*/
int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
