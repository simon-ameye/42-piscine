/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:33:38 by sameye            #+#    #+#             */
/*   Updated: 2020/08/06 13:54:41 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_split(int size, char *nombre)
{
	int i;

	i = 0;
	if (nombre[size - 1] == size - 1 + 48)
	{
		while (nombre[i] == i + 48)
			i++;
		if (i != size)
		{
			ft_putchar('.');
			ft_putchar(' ');
		}
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print(int size, int pos, int min, char *nombre)
{
	int i;

	if (pos < size)
	{
		i = min;
		while (i < 10)
		{
			nombre[pos] = i + 48;
			ft_print(size, pos + 1, i + 1, nombre);
			i++;
		}
	}
	else
	{
		ft_split(size, nombre);
		nombre[pos] = 0;
		i = 0;
		while (nombre[i] != '\0')
		{
			ft_putchar(nombre[i]);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int i;
	char nombre[n];

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i <= (n - 1))
		{
			nombre[i] = '0';
			i++;
		}
		ft_print(n, 0, 0, nombre);
	}
}
