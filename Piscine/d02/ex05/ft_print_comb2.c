/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 05:03:52 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/07 18:28:33 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int a, int b)
{
	ft_putchar('0' + (a / 10));
	ft_putchar('0' + (a % 10));
	ft_putchar(' ');
	ft_putchar('0' + (b / 10));
	ft_putchar('0' + (b % 10));
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			if (a > b)
			{
				print(b, a);
			}
			else if (a != b)
			{
				print(a, b);
			}
			b++;
		}
		c++;
		b = c;
		a++;
	}
}
