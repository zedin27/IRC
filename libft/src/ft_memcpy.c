/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:21:51 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:36:49 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies the memory size of dst into src by num bytes of times. Returns dst
** when iteration is completed
*/

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}
