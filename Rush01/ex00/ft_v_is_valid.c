/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:05:43 by tnave             #+#    #+#             */
/*   Updated: 2020/08/16 23:37:56 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_valid_col(char **tab, int x, int y, char val)
{
	int j;

	j = 0;
	while (j <= 3)
	{
		if (val == tab[j][x] && j != y)
			return (0);
		j++;
	}
	return (1);
}

int		ft_col_is_full(char **tab, int x)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (tab[i][x] == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_vdown_is_valid(char **tab, int x)
{
	int i;
	int coldown_max;
	int coldown;

	i = 1;
	if ((ft_col_is_full(tab, x) == 0))
		return (1);
	coldown_max = tab[3][x];
	coldown = 1;
	while (i <= 3)
	{
		if (tab[3 - i][x] > coldown_max)
		{
			coldown++;
			coldown_max = tab[3 - i][x];
		}
		i++;
	}
	if (coldown != tab[5][x])
		return (0);
	return (1);
}

int		ft_vup_is_valid(char **tab, int x)
{
	int i;
	int colup_max;
	int colup;

	i = 1;
	if ((ft_col_is_full(tab, x) == 0))
		return (1);
	colup_max = tab[0][x];
	colup = 1;
	while (i <= 3)
	{
		if (tab[i][x] > colup_max)
		{
			colup++;
			colup_max = tab[i][x];
		}
		i++;
	}
	if (colup != tab[4][x])
		return (0);
	return (1);
}
