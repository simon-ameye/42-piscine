/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:50:04 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 13:30:23 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			ft_rev_tab(char *tab, int size);
int				ft_strlen(char *str);
int				check_base(char *base);
int				pos_in_base(char c, char *base);
int				ft_char_is_in_base(char c, char *base);

long int		ft_convert(char *tab, long int num, char *base_to)
{
	int			negative;
	int			base_len;
	long int	i;

	base_len = ft_strlen(base_to);
	negative = 0;
	i = 0;
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	if (num == 0)
	{
		tab[i++] = base_to[num % base_len];
	}
	while (num)
	{
		tab[i++] = base_to[num % base_len];
		num = num / base_len;
	}
	if (negative)
		tab[i++] = '-';
	return (i);
}

long int		ft_atoi_base(char *str, char *base)
{
	long int	i;
	int			negative;

	i = 0;
	negative = 1;
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
			|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * -1;
		str++;
	}
	while (ft_char_is_in_base(*str, base))
	{
		i = i * ft_strlen(base) + pos_in_base(*str, base);
		str++;
	}
	return (i * negative);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	num;
	int			i;
	char		*tab;

	i = 0;
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	if (!(tab = malloc(sizeof(char) * 34)))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	i = ft_convert(tab, num, base_to);
	ft_rev_tab(tab, i);
	tab[i] = '\0';
	return (tab);
}
