/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 06:10:01 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/12 11:12:40 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(void)
{
	write(1, "Alerte !!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s2[i] == '\0')
			return (1);
	}
	return (0);
}

void	swap_minuscule(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int		alert(char *str)
{
	if (ft_strcmp(str, "power") == 1)
	{
		ft_write();
		return (1);
	}
	if (ft_strcmp(str, "president") == 1)
	{
		ft_write();
		return (1);
	}
	if (ft_strcmp(str, "attack") == 1)
	{
		ft_write();
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	tmp[10000];
	int		c[3];

	c[0] = 1;
	while (c[0] < argc)
	{
		c[1] = 0;
		c[2] = 0;
		while (argv[c[0]][c[1]] != '\0')
		{
			if (argv[c[0]][c[1]] != ' ')
			{
				tmp[c[2]] = argv[c[0]][c[1]];
				c[2]++;
			}
			c[1]++;
		}
		tmp[c[2]] = '\0';
		swap_minuscule(tmp);
		if (alert(tmp) == 1)
			return (0);
		c[0]++;
	}
	return (0);
}
