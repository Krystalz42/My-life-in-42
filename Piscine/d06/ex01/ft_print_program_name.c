/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:33:16 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/18 02:47:57 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int count;

	count = 0;
	argc = 0;
	while (argv[0][count])
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
