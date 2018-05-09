/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:01:08 by ztisnes           #+#    #+#             */
/*   Updated: 2018/04/25 20:01:38 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long long uint64_t;

void	ft_swap_ull(uint64_t *num1, uint64_t *num2)
{
	uint64_t tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
