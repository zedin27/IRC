/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 03:31:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:16:27 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs a character in a standard output
*/

void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
