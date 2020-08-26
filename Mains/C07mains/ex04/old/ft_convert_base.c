/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:37:21 by sameye            #+#    #+#             */
/*   Updated: 2020/08/18 16:42:06 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int		ft_atoi_base(char *str, char *base);
int		ft_check_base(char *base);



int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int ft_nbr_size(int i, char *base_to)
{
	int j;

	j = 1;
	while ((i = i / ft_strlen(base_to)) != 0)
		j++;
	return (j);
}


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long i;
	int base_to_size;
	int i_in_base_to_size;
	char *res;
	int j;

	if (!ft_check_base(base_to) || !ft_check_base(base_from))
		return("NULL");

	i = ft_atoi_base(nbr, base_from);
	base_to_size = ft_strlen(base_to);
	i_in_base_to_size = ft_nbr_size(i, base_to);
	printf("baseto size %i\n", base_to_size);
	printf("i value  %ld\n", i);
	printf("int in baseto size %i\n", i_in_base_to_size);
	if (i < 0)
		i_in_base_to_size++;
	i_in_base_to_size++;
	printf("int in baseto size after add sign and '0' %i\n", i_in_base_to_size);
	if (!(res = malloc(sizeof(*res) * i_in_base_to_size)))
		return (0);
	if (i < 0)
	{
		res[0] = '-';
		i = -i;
	}
	j = 0;
	while (i >= 1)
	{
		res[i_in_base_to_size - j - 2] = base_to[i % base_to_size];
		printf("adding char %c\n", base_to[i % base_to_size]);
		printf("adding  %ld in pos %i\n", i % base_to_size, i_in_base_to_size - j - 2);
		i = i / base_to_size;
		j++;
	}
	res[base_to_size - 1] = '\0';
	return(res);
}
