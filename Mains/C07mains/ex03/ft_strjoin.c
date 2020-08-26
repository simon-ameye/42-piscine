/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:10:07 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 16:02:59 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_stronlycpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strjoin_write(char *res, int size, char **strs, char *sep)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (i <= size - 1)
	{
		if (i >= 1)
		{
			ft_stronlycpy(res + pos, sep);
			pos = pos + ft_strlen(sep);
		}
		ft_stronlycpy(res + pos, strs[i]);
		pos = pos + ft_strlen(strs[i]);
		i++;
	}
	res[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		str_size;

	if (size > 0)
		str_size = 1 + ft_strlen(sep);
	i = 0;
	while (i <= size - 1)
	{
		str_size = str_size + ft_strlen(strs[i]);
		i++;
	}
	if (!(res = malloc(sizeof(*res) * str_size)))
		return (0);
	if (size <= 0)
		return (res);
	ft_strjoin_write(res, size, strs, sep);
	return (res);
}
