/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:01:39 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 16:23:12 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	i;
	long	lmin;
	long	lmax;

	lmin = min;
	lmax = max;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * (lmax - lmin))))
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		tab[i] = i + lmin;
		i++;
	}
	return (tab);
}
