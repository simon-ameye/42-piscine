/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:41:35 by sameye            #+#    #+#             */
/*   Updated: 2020/08/26 10:53:03 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_fptr	operator(char op)
{
	if (op == '+')
		return (&ft_add);
	if (op == '-')
		return (&ft_minus);
	if (op == '*')
		return (&ft_multiply);
	if (op == '/')
		return (&ft_divide);
	if (op == '%')
		return (&ft_mod);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	t_fptr	pt_f;

	if (argc != 4)
		return (0);
	i = ft_atoi(argv[1]);
	j = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) != 1 || (!(pt_f = operator(argv[2][0]))))
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
	else if (argv[2][0] == '/' && j == 0)
		ft_putstr("Stop : division by zero\n");
	else if (argv[2][0] == '%' && j == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr((*pt_f)(i, j));
		ft_putchar('\n');
	}
	return (0);
}
