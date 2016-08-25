/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 21:50:18 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/23 06:45:38 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_char(int argc, char **argv)
{
	int		i;
	int		c;
	int		size;

	size = 0;
	i = 1;
	c = 0;
	while (argc > i)
	{
		while (argv[i][c])
		{
			size++;
			c++;
		}
		c = 0;
		i++;
	}
	return (size);
}

char	*create_string(int argc, char **argv, char *str)
{
	int		i;
	int		c;
	int		x;

	x = 0;
	c = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][c])
		{
			str[x] = argv[i][c];
			c++;
			x++;
		}
		c = 0;
		i++;
		str[x] = '\n';
		x++;
	}
	str[x - 1] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;

	size = count_char(argc, argv);
	str = (char*)malloc(sizeof(*str) * size + 1);
	create_string(argc, argv, str);
	return (str);
}
