/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:23:07 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:41:50 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs an integer (n) to a standard output
*/

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}
