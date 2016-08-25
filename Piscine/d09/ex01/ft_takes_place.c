/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:24:13 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/11 21:53:27 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_take_place(int hour)
{
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M");
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M");
	if (hour >= 1 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M",
		hour, (hour + 1));
	if (hour >= 13 && hour <= 22)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 PM",
		(hour - 12), (hour - 11));
}
