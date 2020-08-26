/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 21:01:59 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 23:31:02 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int		main(int argc, char **argv)
{
	t_key	*dic;
	int		i;

	if (argc != 2)
		return (0);
	dic = read_dict();
	print_num(dic, argv[1]);
	i = 0;
	while (dic[i].name != 0)
	{
		free(dic[i].name);
		free(dic[i].val);
		i++;
	}
	free(dic[i].name);
	free(dic[i].val);
	free(dic);
}
