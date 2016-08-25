/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 09:55:12 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/24 02:30:30 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdio.h>

void	print_words_tables(char **tab)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		while (tab[i][c] != '\0')
		{
			ft_putchar(tab[i][c]);
			c++;
		}
		c = 0;
		i++;
		ft_putchar('\n');
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		print_words_tables(par[i].tab);
		i++;
	}
}
