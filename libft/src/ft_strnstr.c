/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 00:55:39 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:33:43 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Looks for a little in a big string where no more than len characters are
** found after the first occurence of null-terminated. If there is a '\0'
** in the middle, it will be ignored.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while ((big[i] == little[j]) && big[i] && (i < len))
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
