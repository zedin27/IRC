/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:51:59 by ztisnes           #+#    #+#             */
/*   Updated: 2018/05/04 19:04:08 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tries to change size of the allocation from a ptr to size,and return ptr*
** If there is not enough space to put memory in ptr, it will create new allo-
** cation, copies old data pointed to by ptr to fit in the new allocation
** (used bzero and memcpy for this case).
** Try changing unsigned char to void for testing purposes.
** Credits to Jose :)
*/

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (ptr)
	{
		if (size)
		{
			if (!(new_ptr = ft_memalloc(size)))
				return (NULL);
			ft_bzero(new_ptr, size);
			ft_memcpy(new_ptr, ptr, size);
		}
		else
		{
			if (!(new_ptr = (unsigned char *)malloc(sizeof(ptr))))
				return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}
	return ((unsigned char *)malloc(sizeof(ptr) * size));
}
