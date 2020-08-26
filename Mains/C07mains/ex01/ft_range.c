/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:01:39 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 13:12:27 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*pt_int;
	long	i;
	long	lmax;
	long	lmin;

	lmax = max;
	lmin = min;
	if (lmax <= lmin)
		return (NULL);
	if (!(pt_int = malloc(sizeof(*pt_int) * (lmax - lmin))))
		return (NULL);
	i = 0;
	while (lmin + i < lmax)
	{
		pt_int[i] = lmin + i;
		i++;
	}
	return (pt_int);
}
