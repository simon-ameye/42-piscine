/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_display.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:33:21 by sameye            #+#    #+#             */
/*   Updated: 2020/08/26 16:42:21 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_display(char *str)
{
	int		fd;
	int		i;
	char	buf;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while ((i = read(fd, &buf, 1)))
		write(1, &buf, 1);
	if (close(fd) == -1)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		ft_putstr("File name missing.\n");
	else if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	else
		ft_display(argv[1]);
	return (0);
}
