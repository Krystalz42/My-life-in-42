/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 03:34:47 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/23 00:23:17 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
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
