/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:05:14 by sameye            #+#    #+#             */
/*   Updated: 2020/08/14 13:00:26 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int *pt_pos)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(pt_pos[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int		ft_impossible_row(int *pt_pos, int test_row, int curr_col)
{
	int i;

	i = curr_col - 1;
	while (i >= 0)
	{
		if ((pt_pos[i] == test_row)
			|| (pt_pos[i] == test_row + (curr_col - i))
			|| (pt_pos[i] == test_row - (curr_col - i)))
			return (1);
		i--;
	}
	return (0);
}

void	ft_queens_proc(int curr_col, int *pt_pos)
{
	int test_row;

	test_row = 0;
	while (test_row <= 9)
	{
		if (ft_impossible_row(pt_pos, test_row, curr_col) == 0)
		{
			pt_pos[curr_col] = test_row;
			if (curr_col == 9)
			{
				ft_write(pt_pos);
			}
			else
				ft_queens_proc((curr_col + 1), pt_pos);
		}
		test_row++;
	}
}

void	ft_ten_queens_puzzle(void)
{
	int pos[10];

	pos[0] = 0;
	while (pos[0] <= 9)
	{
		ft_queens_proc(1, pos);
		pos[0]++;
	}
}
