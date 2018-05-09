/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:02:12 by ztisnes           #+#    #+#             */
/*   Updated: 2018/04/25 20:02:32 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_double(double *num1, double *num2)
{
	double tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
