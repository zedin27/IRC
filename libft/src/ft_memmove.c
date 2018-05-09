/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 07:02:35 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/10 07:06:50 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Safer than memcpy because it does not overwrites memory. It shifts the
** current pointer memory to a safer memory block depending the size taken
** of s1.
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*temp_s1;

	temp_s1 = s1;
	if (!n)
		return (s1);
	if (s1 <= s2 || (unsigned char *)s1 > ((unsigned char *)s2 + n))
		return (ft_memcpy(s1, s2, n));
	else
	{
		s1 = (unsigned char *)s1 + n - 1;
		s2 = (unsigned char *)s2 + n - 1;
		while (n--)
			*(unsigned char *)s1-- = *(unsigned char *)s2--;
	}
	return (temp_s1);
}
