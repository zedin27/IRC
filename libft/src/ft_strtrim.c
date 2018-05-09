/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:39:35 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/10 01:21:05 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Removes tabs, newlines, and whitespaces from beginning and end of a string
** Created 4 different functions that does each step for readability.
*/

int		step1_get_position(char const *string)
{
	int i;

	i = 0;
	while (ft_iswhitespace(string[i]))
	{
		i++;
		continue ;
	}
	return (i);
}

char	*step2_copy_string(char const *string, int pos)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!(tmp = ft_strnew(ft_strlen(string))))
		return (NULL);
	while (string[pos] != '\0')
		tmp[i++] = string[pos++];
	return (tmp);
}

char	*step3_remove_white(char *str)
{
	int i;

	i = ft_strlen(str);
	while (str[i] == '\0' || ft_iswhitespace(str[i]))
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}

char	*step4_remove_extra_nulls(char *str)
{
	char *newstring;

	if (!(newstring = ft_strdup(str)))
		return (NULL);
	free(str);
	return (newstring);
}

char	*ft_strtrim(char const *string)
{
	char	*trim;
	int		i;

	if (!(string))
		return (NULL);
	i = step1_get_position(string);
	trim = step2_copy_string(string, i);
	if (trim == NULL)
		return (NULL);
	step3_remove_white(trim);
	trim = step4_remove_extra_nulls(trim);
	if (trim == NULL)
		return (NULL);
	return (trim);
}
