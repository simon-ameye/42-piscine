/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:34:24 by sameye            #+#    #+#             */
/*   Updated: 2020/08/13 17:24:36 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_in_base(char *base, char c)
{
	int j;

	j = 0;
	while (base[j] != '\0')
	{
		if (base[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int		ft_iterative_add(char *str, char *base, int *str_data, int base_length)
{
	int base_digit;
	int res;
	int current_digit;
	int multiplicator;

	multiplicator = 1;
	res = 0;
	current_digit = str_data[2];
	while (current_digit >= str_data[1])
	{
		base_digit = 0;
		while (str[current_digit] != base[base_digit])
		{
			if (base[base_digit] == '\0')
			{
				return (0);
			}
			base_digit++;
		}
		res = res + (base_digit) * multiplicator;
		multiplicator = multiplicator * base_length;
		current_digit--;
	}
	return (res);
}

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\f' ||
		c == '\n' || c == '\r' ||
		c == '\t' || c == '\v')
		return (1);
	return (0);
}

void	ft_string_data(char *str, char *base, int *str_data)
{
	int sign;
	int i;
	int j;

	sign = 1;
	i = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	j = i;
	while (ft_char_is_in_base(base, str[j]) == 1)
		j++;
	str_data[0] = sign;
	str_data[1] = i;
	str_data[2] = j - 1;
	str_data[3] = j - i - 2;
}

int		ft_atoi_base(char *str, char *base)
{
	int str_data[4];
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || ft_is_whitespace(base[i]))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
		i++;
	ft_string_data(str, base, str_data);
	return (ft_iterative_add(str, base, str_data, i) * str_data[0]);
}
