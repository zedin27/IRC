/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 18:01:39 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:52:41 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenate strings (s2 to s1)
** s1 is the destination, which contains enough space for concatenation.
** s2 is the append string and should not overlap with the destination.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
