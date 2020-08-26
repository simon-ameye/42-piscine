/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:12:42 by sameye            #+#    #+#             */
/*   Updated: 2020/08/25 17:18:01 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*swap;

	if (tab[0] == 0)
		return ;
	if (tab[1] == 0)
		return ;
	i = 0;
	while (tab[i + 1] != 0)
	{
		if ((*cmp)(tab[i + 1], tab[i]) < 0)
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = -1;
		}
		i++;
	}
}
