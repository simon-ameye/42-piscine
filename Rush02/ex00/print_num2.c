/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:40:57 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 20:28:04 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void		print_dec(t_key *dic, int b, int c)
{
	if (b >= 2)
	{
		ft_putstr(dic[b + 18].name);
		if (c >= 1)
		{
			ft_putchar(' ');
			ft_putstr(dic[c].name);
		}
	}
	else if (b >= 1 && c >= 1)
	{
		ft_putstr(dic[b * 10 + c].name);
	}
	else if (b >= 1 && c < 1)
		ft_putstr(dic[b * 10 + c].name);
	else if (c >= 1)
	{
		ft_putstr(dic[c].name);
	}
}

void		print_hundr(t_key *dic, int a, int b, int c)
{
	if (a >= 1)
	{
		ft_putstr(dic[a].name);
		ft_putchar(' ');
		ft_putstr(dic[28].name);
		if (b >= 1 || c >= 1)
			ft_putchar(' ');
	}
	print_dec(dic, b, c);
}
