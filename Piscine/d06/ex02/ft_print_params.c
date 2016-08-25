/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:51:33 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/18 00:44:18 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int c;

	i = 1;
	c = 0;
	while (argc > i)
	{
		while (argv[i][c])
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		i++;
	}
	return (0);
}
