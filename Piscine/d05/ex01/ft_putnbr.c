/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 04:35:57 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/16 19:05:18 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnb(int nb, int i)
{
	long int	tmp;
	char		nbc;

	while (i >= 1)
	{
		tmp = nb;
		nb = nb % i;
		tmp = tmp / i;
		i /= 10;
		nbc = '0' + tmp;
		ft_putchar(nbc);
	}
}

void	ft_putnbr(int nb)
{
	long int	nbr;
	long int	i;

	nbr = nb;
	i = 1;
	if (nbr == 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr == 1)
		ft_putchar('1');
	while (nbr > i)
		i *= 10;
	i /= 10;
	ft_putnb(nbr, i);
}
