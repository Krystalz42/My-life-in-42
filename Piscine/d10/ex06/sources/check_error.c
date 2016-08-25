/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 02:56:22 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 14:16:19 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_do_op.h"

int		check_operator_sign(char *c)
{
	char	*error;
	int		i;
	int		count;

	count = 0;
	error = "+-/%*";
	while (c[count] != '\0')
		count++;
	if (count != 1)
	{
		ft_putstr("0\n");
		return (-1);
	}
	count = 0;
	i = -1;
	while (error[++i])
		if (error[i] == c[count])
			count++;
	if (count != 1)
	{
		ft_putstr("0\n");
		return (-1);
	}
	return (0);
}

int		check_operator(char *op, int nb)
{
	if (*op == '%' && nb == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	if (*op == '/' && nb == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	return (0);
}

int		return_error(int ac)
{
	int i;
	int c;

	c = 0;
	i = 1;
	if (ac != 4)
	{
		return (1);
	}
	return (0);
}

int		check_error(int ac)
{
	if (return_error(ac) == 1)
		return (1);
	return (0);
}
