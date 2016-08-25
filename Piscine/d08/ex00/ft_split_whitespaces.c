/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 15:05:36 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/23 07:52:58 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_error(char c)
{
	int		i;
	int		count;
	char	*error;

	error = " 	\n";
	i = 0;
	count = 0;
	while (error[i])
	{
		if (error[i] && c == error[i])
			count += 1;
		i++;
	}
	return (count);
}

char	**save_arg(char *str)
{
	char	**tab;
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] && !(check_error(str[i])))
			i++;
		word_count += (i > 0 ? 1 : 0);
		while (str[i] && check_error(str[i]))
			i++;
	}
	tab = malloc(sizeof(*tab) * (word_count + 1));
	tab[word_count] = 0;
	return (tab);
}

char	*ft_strcpy(char *src, int count)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (count + 1));
	while (src[i] && !(check_error(src[i])))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;
	char	*tmp;
	int		j;
	int		c;

	j = 0;
	i = 0;
	tab = save_arg(str);
	while (str[i])
	{
		c = 0;
		while (str[i] && check_error(str[i]))
			i++;
		while (str[i] != '\0' && !(check_error(str[i])))
		{
			tmp = (c == 0) ? str + i : tmp;
			i++;
			c++;
		}
		if (!(check_error(str[i - 1])))
			tab[j++] = ft_strcpy(tmp, c);
	}
	return (tab);
}
