/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 22:56:14 by jbuon             #+#    #+#             */
/*   Updated: 2020/08/16 23:39:54 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_valid_row(char **tab, int x, int y, char val);
int		ft_is_valid_col(char **tab, int x, int y, char val);
int		ft_vdown_is_valid(char **tab, int x);
int		ft_vup_is_valid(char **tab, int x);
int		ft_hleftvalid(char **tab, int y);
int		ft_hrightvalid(char **tab, int y);

int		ft_backtracking(char **tab, int n)
{
	int val;
	int x;
	int y;

	if (n >= 4 * 4)
		return (1);
	val = 1;
	y = n % 4;
	x = n / 4;
	while (val <= 4)
	{
		tab[y][x] = val;
		if (ft_is_valid_row(tab, x, y, val) == 1)
			if (ft_is_valid_col(tab, x, y, val) == 1)
				if ((ft_vdown_is_valid(tab, x) && (ft_vup_is_valid(tab, x))))
					if ((ft_hleftvalid(tab, y) && (ft_hrightvalid(tab, y))))
					{
						if (ft_backtracking(tab, n + 1) == 1)
							return (1);
						tab[y][x] = 0;
					}
		val++;
	}
	tab[y][x] = 0;
	return (0);
}
