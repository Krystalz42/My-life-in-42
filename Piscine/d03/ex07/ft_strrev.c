/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 02:26:32 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/08 17:03:05 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		c;
	char	tmp;
	int		d;

	d = 0;
	c = 0;
	while (*(str + c) != '\0')
	{
		c++;
	}
	c = c - 1;
	while (d <= c / 2)
	{
		tmp = *(str + d);
		*(str + d) = *(str + c - d);
		*(str + c - d) = tmp;
		d++;
	}
	return (str);
}