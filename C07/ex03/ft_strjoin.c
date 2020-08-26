/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:10:07 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 16:27:57 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct	s_in
{
	int i;
	int size;
}				t_info;

int				ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_cat(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

void			ft_join(t_info i_and_size, char **strs, char *sep, char *str)
{
	if (i_and_size.i < i_and_size.size - 1)
	{
		str = ft_cat(str, strs[i_and_size.i]);
		i_and_size.i++;
		ft_join(i_and_size, strs, sep, ft_cat(str, sep));
	}
	else
	{
		str = ft_cat(str, strs[i_and_size.i]);
		*str = 0;
	}
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	char		*str;
	int			chars;
	int			i;
	int			total_chars;
	t_info		i_and_size;

	if (size == 0)
	{
		if (!(str = malloc(sizeof(char))))
			return (0);
		*str = '\0';
		return (str);
	}
	i = -1;
	chars = 0;
	while (i++ < size - 1)
		chars += ft_strlen(strs[i]);
	total_chars = chars + ft_strlen(sep) * (size - 1) + 1;
	if (!(str = malloc(sizeof(*sep) * total_chars)) || !size)
		return (0);
	i_and_size.i = 0;
	i_and_size.size = size;
	ft_join(i_and_size, strs, sep, str);
	return (str);
}
