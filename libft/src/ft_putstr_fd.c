/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:10:44 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 03:44:55 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd
*/

void	ft_putstr_fd(char const *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
