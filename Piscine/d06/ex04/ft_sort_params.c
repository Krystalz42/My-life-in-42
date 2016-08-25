/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:23:34 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/18 00:44:43 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strcpy(char *s1, char *s2)
{
	int		c;

	c = 0;
	while (s2[c])
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = s2[c];
	s1[c + 1] = '\0';
}

void	ft_print(int argc, char **argv)
{
	int		i;
	int		c;

	i = 1;
	c = 0;
	while (i < argc)
	{
		while (argv[i][c] != '\0')
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		swap;

	i = 1;
	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[1 + i]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
	ft_print(argc, argv);
	return (0);
}
