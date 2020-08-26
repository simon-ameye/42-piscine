/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 20:15:26 by sameye            #+#    #+#             */
/*   Updated: 2020/08/14 13:23:05 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_limit(int nb)
{
	int lim;

	lim = 2;
	while (lim * lim <= nb && lim < 46341)
		lim++;
	return (lim);
}

int	ft_is_prime(int nb)
{
	int test;
	int lim;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	lim = ft_sqrt_limit(nb);
	if (nb % 2 == 0)
		return (0);
	test = 3;
	while (test <= lim)
	{
		if ((nb % test) == 0)
			return (0);
		test = test + 2;
	}
	return (1);
}
