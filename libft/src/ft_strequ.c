/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:45:42 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:19:11 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares string s1 and s2 character by character. If they match, it will
** continue until the characters differ or terminating null-character is done
** <0 means that the first character does not match is lower (ptr1 < ptr2)
** 0 means content of string are both equal lexicographical.
** >0 <0 means that the first character does not match is higher (ptr1 > ptr2).
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (!ft_strcmp(s1, s2))
			return (1);
	return (0);
}
