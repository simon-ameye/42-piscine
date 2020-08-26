/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:09:59 by tnave             #+#    #+#             */
/*   Updated: 2020/08/16 23:36:48 by tnave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char	*str);
int		ft_backtracking(char **tab, int n);
char	**ft_init();
void	ft_print_table(char **tab);
void	ft_fill_pov(char **tab, char *input);
int		ft_strlen(char *str);
int		ft_is_number(char *str);
int		ft_isspace(char *str);

void	ft_is_error(void)
{
	ft_putstr("Error\n");
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		len_arg;

	if (argc == 1)
	{
		ft_is_error();
		return (0);
	}
	len_arg = ft_strlen(argv[1]);
	if ((argc != 2) || (len_arg != 31))
	{
		ft_is_error();
		return (0);
	}
	tab = ft_init();
	ft_fill_pov(tab, argv[1]);
	if (ft_backtracking(tab, 0) == 1)
		ft_print_table(tab);
	else
	{
		ft_is_error();
		return (0);
	}
	free(tab);
	return (0);
}
