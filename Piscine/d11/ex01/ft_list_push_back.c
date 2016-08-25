/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:50:59 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 05:20:57 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{	
	t_list = *list
	list = *begin_list;

	if (list)
	{
		while (list)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		begin_list = ft_create_elem;
	
}
