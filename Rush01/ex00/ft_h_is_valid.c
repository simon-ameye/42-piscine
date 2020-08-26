/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:39:39 by tnave             #+#    #+#             */
/*   Updated: 2020/08/16 23:39:14 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_valid_row(char **tab, int x, int y, char val)
{
	int i;

	i = 0;
	while (i <= 3)
	{
		if (val == tab[y][i] && i != x)
			return (0);
		i++;
	}
	return (1);
}

int		ft_row_is_full(char **tab, int y)
{
	int i;

	i = 0;
	while (i <= 3)
	{
		if (tab[y][i] == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_hleftvalid(char **tab, int y)
{
	int rowleft_max;
	int rowleft;
	int i;

	i = 1;
	if ((ft_row_is_full(tab, y) == 0))
		return (1);
	rowleft = 1;
	rowleft_max = tab[y][0];
	while (i <= 3)
	{
		if (tab[y][i] > rowleft_max)
		{
			rowleft++;
			rowleft_max = tab[y][i];
		}
		i++;
	}
	if (rowleft != tab[y][4])
		return (0);
	return (1);
}

int		ft_hrightvalid(char **tab, int y)
{
	int i;
	int rowright_max;
	int rowright;

	if ((ft_row_is_full(tab, y) == 0))
		return (1);
	rowright = 1;
	i = 1;
	rowright_max = tab[y][3];
	while (i <= 3)
	{
		if (tab[y][3 - i] > rowright_max)
		{
			rowright++;
			rowright_max = tab[y][3 - i];
		}
		i++;
	}
	if (rowright != tab[y][5])
		return (0);
	return (1);
}
