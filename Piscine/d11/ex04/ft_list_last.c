/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 05:14:47 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 05:20:35 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *list;
	
	list = *begin_list;
	while (list)
	{
		list = list->next;
		if (list->next = NULL)
			return (list)
	}
	return (begin_list)
}
