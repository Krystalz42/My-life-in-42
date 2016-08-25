/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 01:37:21 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/14 04:33:51 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i == 0)
		return (0);
	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}