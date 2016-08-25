/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:00:45 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/18 00:44:33 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int c;

	i = argc - 1;
	c = 0;
	while (i > 0)
	{
		while (argv[i][c])
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		i--;
		ft_putchar('\n');
		c = 0;
	}
	return (0);
}
