/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 19:12:42 by sameye            #+#    #+#             */
/*   Updated: 2020/08/13 19:47:42 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int init;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	init = nb;
	i = power;
	while (i > 1)
	{
		nb = nb * init;
		i--;
	}
	return (nb);
}
