/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 23:06:13 by sameye            #+#    #+#             */
/*   Updated: 2020/08/24 15:00:58 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *pt_map;

	if (!(pt_map = malloc(sizeof(*pt_map) * (length + 1))))
		return (NULL);
	i = 0;
	while (i <= length - 1)
	{
		pt_map[i] = (*f)(tab[i]);
		i++;
	}
	return (pt_map);
}
