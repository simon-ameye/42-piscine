/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 19:53:50 by tnave             #+#    #+#             */
/*   Updated: 2020/08/16 23:01:39 by jbuon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 1 && str[i] > 4)
			return (0);
		i *= 2;
	}
	return (1);
}

int		ft_isspace(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (!(str[i] == ' '))
			return (0);
		i *= 2;
	}
	return (1);
}
