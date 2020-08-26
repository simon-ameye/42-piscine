/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 22:56:31 by jbuon             #+#    #+#             */
/*   Updated: 2020/08/16 23:35:53 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

char	**ft_init(void)
{
	int		i;
	int		j;
	char	**tab;

	if (!(tab = malloc(6 * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i <= 6)
	{
		if (!(tab[i] = malloc(sizeof(char))))
			return (NULL);
		i++;
	}
	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			tab[j][i] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_fill_pov(char **tab, char *input)
{
	int i;

	i = 0;
	while (i <= 3)
	{
		tab[4][i] = input[i * 2] - '0';
		tab[5][i] = input[i * 2 + 8] - '0';
		tab[i][4] = input[i * 2 + 8 + 8] - '0';
		tab[i][5] = input[i * 2 + 8 + 8 + 8] - '0';
		i++;
	}
}
