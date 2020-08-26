/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:08:34 by tnave             #+#    #+#             */
/*   Updated: 2020/08/16 22:41:36 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_table(char **tab)
{
	int i;
	int j;

	j = 0;
	while (j <= 3)
	{
		i = 0;
		while (i <= 3)
		{
			ft_putchar(tab[j][i] + '0');
			if (i < 3)
				ft_putchar(' ');
			i++;
		}
		if (j < 3)
			ft_putchar('\n');
		j++;
	}
	ft_putchar('\n');
}
