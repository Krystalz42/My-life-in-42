/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:05:03 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/12 03:21:32 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotmin(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	rotmaj(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	define(char c)
{
	if (c >= 65 && c <= 97)
		return (rotmaj(c));
	else if (c >= 97 && c <= 122)
		return (rotmin(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = define(str[i]);
		i++;
	}
	return (str);
}
