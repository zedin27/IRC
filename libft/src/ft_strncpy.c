/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 20:01:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:23:07 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function copies the string pointed to by taking n bytes from the src string,
** including the null byte '\0'. Destination string (dest) must be larger so
** it does not overlap and able to copy.
*/

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t i;

	i = 0;
	while (i < num && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < num)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
