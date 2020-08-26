/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:22:11 by sameye            #+#    #+#             */
/*   Updated: 2020/08/09 19:14:11 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_char_def(int j, int y, char *str)
{
	if (j == 1)
	{
		str[0] = '/';
		str[1] = '*';
		str[2] = '\\';
	}
	else if (j == y)
	{
		str[0] = '\\';
		str[1] = '*';
		str[2] = '/';
	}
	else
	{
		str[0] = '*';
		str[1] = ' ';
		str[2] = '*';
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	str[3];

	j = 1;
	while ((j <= y) && (x > 0) && (y > 0))
	{
		ft_char_def(j, y, &str[0]);
		i = 1;
		while (i <= x)
		{
			if (i == 1)
				ft_putchar(str[0]);
			else if (i == x)
				ft_putchar(str[2]);
			else
				ft_putchar(str[1]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
