/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:02:22 by sameye            #+#    #+#             */
/*   Updated: 2020/08/14 13:21:46 by sameye           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
