/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:17:07 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 16:19:27 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		sl;
	char	*add;
	int		i;

	sl = ft_strlen(src);
	add = malloc(sizeof(*src) * sl);
	i = -1;
	while (i++ < sl)
		add[i] = src[i];
	return (add);
}
