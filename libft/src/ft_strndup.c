/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 20:57:59 by ztisnes           #+#    #+#             */
/*   Updated: 2018/03/13 21:07:42 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (!(s1 = (char *)ft_memalloc((n + 1) * sizeof(char))))
		return (0);
	while (n--)
	{
		s1[i] = str[i];
		i++;
	}
	return (s1);
}
