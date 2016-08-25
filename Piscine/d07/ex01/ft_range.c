/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 04:32:51 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/23 00:10:06 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (max <= min)
	{
		tab = 0;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
