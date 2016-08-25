/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 07:11:12 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/23 02:23:16 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_error(char c, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (charset[i])
	{
		if (charset[i] && c == charset[i])
			count += 1;
		i++;
	}
	return (count);
}

char	**save_arg(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] && !(check_error(str[i], charset)))
			i++;
		word_count += (i > 0 ? 1 : 0);
		while (str[i] && check_error(str[i], charset))
			i++;
	}
	tab = malloc(sizeof(*tab) * (word_count + 1));
	tab[word_count] = 0;
	return (tab);
}

char	*ft_strcpy(char *src, int count, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (count + 1));
	while (src[i] && !(check_error(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;
	char	*tmp;
	int		j;
	int		c;

	j = 0;
	i = 0;
	tab = save_arg(str, charset);
	while (str[i])
	{
		c = 0;
		while (str[i] && check_error(str[i], charset))
			i++;
		while (str[i] != '\0' && !(check_error(str[i], charset)))
		{
			tmp = (c == 0) ? str + i : tmp;
			i++;
			c++;
		}
		if (!(check_error(str[i - 1], charset)))
			tab[j++] = ft_strcpy(tmp, c, charset);
	}
	return (tab);
}
