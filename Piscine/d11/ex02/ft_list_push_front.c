/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 04:30:24 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 05:21:06 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list = tmp;

	if (list)
	{
		tmp = ft_create_elem(data); 
		tmp->next = *begin_list;
		*begin_list = tmp;

	}
	else
		*begin_list = ft_create_elem(data);
}
