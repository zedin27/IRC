/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:38:01 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 20:00:57 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Join two strings (s1 and s2) into a temporary "fresh" string with malloc.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	if (!s1 || !s2)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * ft_strlen(s1)
		+ ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
