/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:44:04 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:51:31 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clears a string s by iteration and replacing each character to null '\0'
*/

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
			s[i++] = '\0';
	}
}
