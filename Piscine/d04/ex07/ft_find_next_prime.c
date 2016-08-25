/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:34:30 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/11 08:25:14 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
	{
		return (1);
	}
	else if (nb <= 9)
	{
		return (0);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	while ((i * i) <= nb && i < nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (ft_is_prime(nb + i) == 0)
	{
		i++;
	}
	return (nb + i);
}
