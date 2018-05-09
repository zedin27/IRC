/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 21:14:56 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/06 04:19:34 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the FIRST occurance of the NULL-terminated string little
** Easy way to think: If there is life in one galaxy, continue searching the
** other planets too. If there is no life in the planet, then return the galaxy
** From the code below, implement the idea of galaxy and life above.
** Then, the big will be "the universe" and the little will be "life being"
** big = galaxy + 1 will be our new current size "Universe is expanding"
*/

char	*ft_strstr(const char *big, const char *little)
{
	const char	*galaxy;
	const char	*alien;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		galaxy = big;
		alien = little;
		while (*big && *alien && *big == *alien)
		{
			big++;
			alien++;
		}
		if (!*alien)
			return ((char *)galaxy);
		big = galaxy + 1;
	}
	return (NULL);
}
