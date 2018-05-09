/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:23:05 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:52:01 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** String iteration  that applies function f to each character.
** Passing the index as the first argumenT. Each character is passed by address
** to f to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i, s++);
			i++;
		}
	}
}
