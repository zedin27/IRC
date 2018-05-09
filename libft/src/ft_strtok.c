/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:19:16 by ztisnes           #+#    #+#             */
/*   Updated: 2018/02/12 00:13:02 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** FIXME
** Sequences of calls to this function split str into contiguous characters.
** These are seperated by the delimiters. To determine beginning and end of
** a token, the function first scans from the characters without any delim.
** The end of a delimiter is replaced by a NULL-character (stok).
** Once the end of a string (str) found a stok, all the calls will
** return as a NULL pointer (ptr = NULL).
** If a token is found, a pointer to the beginning of the token, else
** a null pointer.
*/

char	*ft_strtok(char *str, const char *delim)
{
	static char		*stok;
	char			*ptr;
	int				flag;

	flag = 0;
	stok = NULL;
	ptr = NULL;
	if (str != NULL)
		stok = ft_strdup(str);
	while (*stok != '\0')
	{
		if (flag == 0 && *stok != *delim)
		{
			flag = 1;
			ptr = stok;
		}
		else if (flag == 1 && *stok == *delim)
		{
			*stok = '\0';
			stok++;
			break ;
		}
		stok++;
	}
	return (ptr);
}
