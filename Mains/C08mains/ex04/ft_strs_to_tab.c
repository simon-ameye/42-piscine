/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 11:17:09 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 18:50:42 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	if (*dest != '\0')
		*dest = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*pt_t;

	if (!(pt_t = malloc(sizeof(*pt_t) * ac + 1)))
		return (0);
	i = 0;
	while (i < ac)
	{
		pt_t[i].size = ft_strlen(av[i]);
		if (!(pt_t[i].copy = malloc(sizeof(pt_t[i].str)
			* ft_strlen(av[i]) + 1)))
			return (0);
		pt_t[i].str = av[i];
		if (!(pt_t[i].copy = malloc(sizeof(pt_t[i].str)
			* ft_strlen(av[i]) + 1)))
			return (0);
		ft_strcpy(pt_t[i].copy, av[i]);
		i++;
	}
	pt_t[i].str = NULL;
	return (pt_t);
}
