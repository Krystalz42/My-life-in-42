/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:45:44 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 07:11:10 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	i = 0;
	dest = malloc(sizeof(*dest) * length);
	while (i <= length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
