/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:08:54 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/10 00:34:00 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks the string in a loop if a character exists.
** If the character detects a space and continues to read the string, then
** word increments until loop is over. Return the value of word.
*/

size_t	ft_wordcount(char const *s, char c)
{
	int i;
	int words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}
