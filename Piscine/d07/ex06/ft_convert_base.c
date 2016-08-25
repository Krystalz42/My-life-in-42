/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:49:36 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/24 03:52:02 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		op_power(int nb, int power)
{
	long	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	if (i > 2147483647)
		return (0);
	return (i);
}

char	*convert_to_base(long ten, char *base_to, int neg, int i)
{
	long	num;
	char	*c;
	int		to;

	to = 0;
	while (base_to[to])
		to++;
	c = malloc(35);
	if (ten == 0)
	{
		c[i] = '0';
		return (c);
	}
	while (ten != 0)
	{
		num = ten;
		ten = ten / to;
		num = num % to;
		c[i++] = base_to[num];
	}
	if (neg == 1)
		c[i++] = '-';
	while (c[i])
		c[i++] = '\0';
	return (c);
}

char	*ft_strrev(char *str)
{
	int		c;
	char	tmp;
	int		d;

	d = 0;
	c = 0;
	while (str[c])
		c++;
	c--;
	while (d <= c / 2)
	{
		tmp = str[d];
		str[d] = str[c - d];
		str[c - d] = tmp;
		d++;
	}
	return (str);
}

long	convert_to_ten(char *nbr, int nb, char *base_from, int neg)
{
	int		i;
	long	ten;
	int		slot;
	char	*str;
	int		base;

	base = 0;
	str = malloc(sizeof(char) * nb + 1);
	slot = 0;
	ten = 0;
	i = 0;
	while (base_from[base])
		base++;
	if (neg == 1)
		i++;
	while (nbr[i])
	{
		while (base_from[slot] != nbr[i])
			slot++;
		ten = ten + (slot * (op_power(base, nb - 1)));
		nb--;
		slot = 0;
		i++;
	}
	return (ten);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		neg;
	long	result;
	int		i;

	i = 0;
	neg = 0;
	nb = 0;
	while (nbr[nb])
		nb++;
	if (nbr[0] == '-')
	{
		nb--;
		neg++;
	}
	result = convert_to_ten(nbr, nb, base_from, neg);
	nbr = convert_to_base(result, base_to, neg, 0);
	ft_strrev(nbr);
	return (nbr);
}
