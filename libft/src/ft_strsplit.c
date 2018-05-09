/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 07:01:56 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/12 14:59:35 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Splits a given string into a seperate string as a "fresh" string
*/

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**w;

	i = 0;
	k = 0;
	if (!s || !(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		if (!(w[i] = (char *)malloc(sizeof(char)
			* (ft_wordlength(&s[k], c) + 1))))
			w[i] = ft_strnew(ft_wordlength(&s[k], c) + 1);
		if (!(w[i]))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			w[i][j++] = s[k++];
		w[i++][j] = '\0';
	}
	w[i] = NULL;
	return (w);
}
