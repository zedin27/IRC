/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:24:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 20:16:55 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** After the function f to each characters of the string given as argument to
** a fresh "fresh" new string with malloc, resulting from the successive
** applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (i < ft_strlen(s))
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
