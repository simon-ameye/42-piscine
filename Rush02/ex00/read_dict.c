/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 20:32:52 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 23:31:05 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

t_key	*create_tab(int lines)
{
	int		i;
	t_key	*dic;

	if (!(dic = malloc(sizeof(*dic) * lines + 1)))
		return (0);
	dic[lines + 1].val = 0;
	dic[lines + 1].name = 0;
	i = 0;
	while (i < lines)
	{
		if (!(dic[i].name = malloc(sizeof(char) * 46)))
			return (0);
		if (!(dic[i].val = malloc(sizeof(char) * 46)))
			return (0);
		i++;
	}
	return (dic);
}

void	fill_cells(t_key *dic, char *pt_buf, int *pt_key, int *pt_k)
{
	if (pt_buf[0] <= '9' && pt_buf[0] >= '0')
	{
		dic[pt_key[0]].val[pt_k[0]] = pt_buf[0];
		dic[pt_key[0]].val[pt_k[0] + 1] = '\0';
		pt_k[0]++;
	}
	else if (pt_buf[0] <= 'z' && pt_buf[0] >= 'a')
	{
		dic[pt_key[0]].name[pt_k[0]] = pt_buf[0];
		dic[pt_key[0]].name[pt_k[0] + 1] = '\0';
		pt_k[0]++;
	}
	else
		pt_k[0] = 0;
	if (pt_buf[0] == '\n')
		pt_key[0]++;
}

void	fill_tab(t_key *dic, int file_des)
{
	char	*pt_buf;
	char	buf;
	int		key;
	int		k;
	int		t;

	buf = 0;
	pt_buf = &buf;
	key = 0;
	k = 0;
	while ((t = read(file_des, pt_buf, 1)))
	{
		fill_cells(dic, pt_buf, &key, &k);
	}
}

void	show_tab(t_key *dic, int lines)
{
	int i;

	i = 0;
	while (i <= lines - 1)
	{
		ft_putstr(dic[i].val);
		ft_putstr(" ");
		ft_putstr(dic[i].name);
		ft_putstr("\n");
		i++;
	}
}

t_key	*read_dict(void)
{
	int		file_des;
	t_key	*dic;
	int		lines;

	file_des = open(DICT_FILE, O_RDONLY);
	lines = lines_count(file_des);
	close(file_des);
	file_des = open(DICT_FILE, O_RDONLY);
	dic = create_tab(lines);
	fill_tab(dic, file_des);
	return (dic);
}
