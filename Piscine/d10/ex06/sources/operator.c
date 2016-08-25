/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 03:05:49 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/25 14:26:54 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_do_op.h"

int	make_operator(int nb1, int nb2, char *c)
{
	if (*c == '+')
		return (nb1 + nb2);
	if (*c == '-')
		return (nb1 - nb2);
	if (*c == '%')
		return (nb1 % nb2);
	if (*c == '*')
		return (nb1 * nb2);
	if (*c == '/')
		return (nb1 / nb2);
	return (0);
}

int	ft_operator(int ac, char **av)
{
	int		nb1;
	int		nb2;
	char	*s1;
	char	*s2;
	int		result;

	s1 = 0;
	s2 = 0;
	nb1 = 0;
	nb2 = 0;
	result = 0;
	if (check_error(ac) == 1)
		return (1);
	if (check_operator_sign(av[2]) == -1)
		return (1);
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	if (check_operator(av[2], nb2) == 1)
		return (1);
	result = make_operator(nb1, nb2, av[2]);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
