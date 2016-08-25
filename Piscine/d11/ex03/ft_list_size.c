/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 04:45:49 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 05:21:30 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_size *begin_list)
{
	int i;
	t_list *list;

	i = 0;
	list = *begin_list;
	while (list[i])
	{
		list = list->next
		i++;
	}
	return (i);
}
