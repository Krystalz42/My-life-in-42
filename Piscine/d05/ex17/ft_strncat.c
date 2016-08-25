/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 02:37:37 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/15 23:38:27 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned	int index;
	unsigned	int count;

	index = 0;
	count = 0;
	while (dest[index])
		index++;
	while (src[count] && count < size)
	{
		dest[index] = src[count];
		index++;
		count++;
	}
	dest[index] = '\0';
	return (dest);
}
