/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 06:01:31 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/16 19:09:55 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c;
	int a;
	int size;

	size = 0;
	a = 0;
	c = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[c])
	{
		while (str[c + a] == to_find[a])
		{
			if (a == size - 1)
				return (str + c);
			a++;
		}
		a = 0;
		c++;
	}
	return (0);
}
