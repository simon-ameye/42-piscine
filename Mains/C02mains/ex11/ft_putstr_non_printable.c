/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:28:04 by sameye            #+#    #+#             */
/*   Updated: 2020/08/11 10:57:03 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printx(unsigned char nb)
{
	ft_putchar("0123456789abcdef"[nb / 16]);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

void	*ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < ' ') || (str[i] > '~'))
		{
			ft_putchar('\\');
			printx(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (str);
}
