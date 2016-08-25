/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:59:01 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 06:42:20 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int checker[2];

	i = -1;
	checker[0] = 0;
	checker[1] = 0;
	while (++i < length - 1)
		checker[0] += f(tab[i], tab[i + 1]) <= 0 ? 0 : 1;
	i = -1;
	while (++i < length - 1)
		checker[1] += f(tab[i], tab[i + 1]) >= 0 ? 0 : 1;
	return ((checker[0] == 0 || checker[1] == 0) ? 1 : 0);
}
