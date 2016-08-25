/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 15:52:00 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/07 05:21:13 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnb(int nb, int d, int c)
{
	double	f;
	int		a;
	char	e;

	f = nb;
	if (c == 1)
	{
		ft_putchar('-');
	}
	while (d >= 1)
	{
		f = f / d;
		a = f;
		f = f - a;
		f = f * d;
		d = d / 10;
		e = '0' + a;
		ft_putchar(e);
	}
}

void	ft_putnbr(int nb)
{
	long int	d;
	int			c;

	d = 1;
	c = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		c = c + 1;
	}
	while (nb > d)
	{
		d = d * 10;
	}
	d = d / 10;
	ft_putnb(nb, d, c);
}
