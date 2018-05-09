/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:39:34 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:15:23 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes dynamic memory after *ap is called
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
