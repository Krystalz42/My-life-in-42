/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 02:48:58 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/24 06:38:49 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		check_error(int ac);
int		ft_operator(int ac, char **av);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strncpy(char *dest, char *src, int i);
void	ft_putnbr(int nb);
int		check_operator_sign(char *c);
int		check_operator(char *op, int nb);
int		return_error(int ac);

#endif
