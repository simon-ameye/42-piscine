/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:46:59 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 15:50:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*pt_int;
	int		i;
	long	lmin;
	long	lmax;

	lmin = min;
	lmax = max;
	if (lmax <= lmin)
	{
		*range = NULL;
		return (0);
	}
	if (!(pt_int = malloc(sizeof(*pt_int) * (lmax - lmin))))
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (lmin + i < lmax)
	{
		pt_int[i] = lmin + i;
		i++;
	}
	*range = pt_int;
	return (i);
}
