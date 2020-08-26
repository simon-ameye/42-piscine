/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 20:32:52 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 20:51:28 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int		lines_count(int file_des)
{
	int		lines;
	char	*pt_buf;
	char	buf;
	int		t;

	pt_buf = &buf;
	lines = 0;
	while ((t = read(file_des, pt_buf, 1)))
	{
		if (pt_buf[0] == '\n')
			lines++;
	}
	return (lines);
}
