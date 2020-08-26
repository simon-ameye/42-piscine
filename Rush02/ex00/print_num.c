/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:40:57 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 20:27:52 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int			print_beginning2(t_key *dic, char *arg)
{
	int size;
	int wrote;
	int wrote2;

	wrote = 0;
	size = ft_strlen(arg);
	if (size % 3 == 2)
	{
		print_hundr(dic, 0, arg[0] - '0', arg[1] - '0');
		if (arg[0] != '0' || arg[1] != '0')
			wrote = 1;
		if (size >= 4 && (arg[0] >= '1' || arg[1] >= '1'))
		{
			ft_putchar(' ');
			ft_putstr(dic[(size - 2) / 3 + 29 - 1].name);
			wrote2 = 1;
		}
	}
	return (wrote && wrote2);
}

int			print_beginning1(t_key *dic, char *arg)
{
	int size;
	int wrote;
	int wrote2;

	wrote = 0;
	size = ft_strlen(arg);
	if (size % 3 == 1)
	{
		print_hundr(dic, 0, 0, arg[0] - '0');
		if (arg[0] != '0')
			wrote = 1;
		if (size >= 4 && arg[0] >= '1')
		{
			ft_putchar(' ');
			ft_putstr(dic[(size - 1) / 3 + 29 - 1].name);
			wrote2 = 1;
		}
	}
	return (wrote && wrote2);
}

void		print_zero(t_key *dic, char *arg)
{
	int i;
	int iszero;
	int size;

	size = ft_strlen(arg);
	i = 0;
	iszero = 1;
	while (i <= size - 1)
	{
		if (arg[i] != '0')
			iszero = 0;
		i++;
	}
	if (iszero == 1)
		ft_putstr(dic[0].name);
}

int			print_merge(char *arg, int i, t_key *dic, int wrote_before)
{
	int pos;
	int size;

	size = ft_strlen(arg);
	pos = size - i;
	if (wrote_before && (arg[pos] != '0' || arg[pos + 1] != '0'
		|| arg[pos + 2] != '0'))
		ft_putchar(' ');
	wrote_before = 0;
	print_hundr(dic, arg[pos] - '0', arg[pos + 1]
		- '0', arg[pos + 2] - '0');
	if (i >= 6 && (arg[pos] >= '1' || arg[pos + 1] >= '1'
		|| arg[pos + 2] >= '1'))
	{
		ft_putchar(' ');
		ft_putstr(dic[i / 3 + 29 - 2].name);
	}
	if (arg[pos] != '0' || arg[pos + 1] != '0' || arg[pos + 2] != '0')
		wrote_before = 1;
	return (wrote_before);
}

void		print_num(t_key *dic, char *arg)
{
	int size;
	int i;
	int wrote_before;

	wrote_before = 0;
	size = ft_strlen(arg);
	wrote_before = (print_beginning1(dic, arg) || print_beginning2(dic, arg));
	i = size;
	while (i >= 3)
	{
		if (i % 3 == 0)
			wrote_before = print_merge(arg, i, dic, wrote_before);
		i--;
	}
	print_zero(dic, arg);
}
