/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 07:26:34 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 07:10:44 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] || s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;

	if (tab[1] == 0)
		return ;
	i = 1;
	while (tab[i])
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
		{
			tmp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		i++;
	}
}
