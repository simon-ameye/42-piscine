/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 18:18:27 by sameye            #+#    #+#             */
/*   Updated: 2020/08/23 20:52:31 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# define DICT_FILE "numbers.dict"

typedef struct	s_key
{
	char	*name;
	char	*val;
}				t_key;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
t_key			*read_dict(void);
void			print_num(t_key *dict, char *arg);
int				ft_strlen(char *str);
int				ift_strncmp(char *s1, char *s2, unsigned int n);
void			print_dec(t_key *dic, int b, int c);
void			print_hundr(t_key *dic, int a, int b, int c);
int				lines_count(int file_des);

#endif
