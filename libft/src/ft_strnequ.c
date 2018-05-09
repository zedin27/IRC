/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 20:53:31 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:23:11 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two strings if they are equal up to n characters or until '\0'
** If they are identical, returns 1. Otherwise returns 0.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (!n || !ft_strncmp(s1, s2, n))
			return (1);
	return (0);
}
