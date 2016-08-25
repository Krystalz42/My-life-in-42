/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:51:28 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/16 07:15:54 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] < '0' && str[i] > 0)
		i++;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		while (str[i] > 0 && str[i] < '0')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
			i++;
		}
	}
	return (str);
}
