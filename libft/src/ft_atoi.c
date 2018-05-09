/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:14:21 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:44:25 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

int		ft_atoi(char *str)
{
	int		i;
	int		flag;
	long	number;

	i = 0;
	flag = 1;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') \
		|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		flag = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number *= 10;
		number += ((int)str[i] - '0');
		i++;
	}
	return (number * flag);
}
