/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 03:00:01 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/24 02:12:56 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strcpy_allow(char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	str = (char*)malloc(sizeof(*str) * size + 1);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				determine_tab(t_stock_par *tab, char *av)
{
	tab->size_param = ft_strlen(av);
	tab->str = av;
	tab->copy = ft_strcpy_allow(av);
	tab->tab = ft_split_whitespaces(av);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;

	i = 0;
	tab = (t_stock_par*)malloc(sizeof(*tab) * (ac + 1));
	if (tab == 0)
		return (tab);
	while (i < ac)
	{
		determine_tab(&(tab[i]), av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
