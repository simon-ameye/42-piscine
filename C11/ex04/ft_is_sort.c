/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:04:52 by sameye            #+#    #+#             */
/*   Updated: 2020/08/24 20:40:30 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int is_sortedp;
	int is_sortedn;

	is_sortedp = 1;
	is_sortedn = 1;
	i = 0;
	if (length >= 2)
	{
		while (i <= length - 2)
		{
			if ((*f)(tab[i + 1], tab[i]) > 0)
				is_sortedp = 0;
			if ((*f)(tab[i + 1], tab[i]) < 0)
				is_sortedn = 0;
			i++;
		}
		if (is_sortedp == 1 || is_sortedn == 1)
			return (1);
		return (0);
	}
	return (1);
}
