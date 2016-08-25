/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 00:53:19 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/11 02:26:36 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else if (index == 3)
		return (2);
	else if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (-1);
}
