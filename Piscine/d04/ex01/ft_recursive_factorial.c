/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 04:47:12 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/11 01:04:34 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb > 1)
	{
		nb = (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
