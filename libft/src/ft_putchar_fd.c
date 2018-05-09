/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 02:13:48 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:16:23 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs a character c into the file descriptor fd
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
