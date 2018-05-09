/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 01:13:51 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 18:40:11 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Short and logical possible
** Compares two strings in a lexigrophic form
** lexigrophic means order of characters based on the alphabet
** It compares in ASCII values which one has a greater value
** Once the loop terminates, the return value depends which is:
** s1 > s2, then value is greater than 0
** s1 < s2, then value is less than 0
** s1 = s2, then value is 0
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1) - (*(unsigned char *)s2);
}
