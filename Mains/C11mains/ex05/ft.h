/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:10:29 by sameye            #+#    #+#             */
/*   Updated: 2020/08/26 10:54:35 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putnbr(int nb);
int		ft_atoi(char *stri);
int		ft_add(int i, int j);
int		ft_minus(int i, int j);
int		ft_multiply(int i, int j);
int		ft_divide(int i, int j);
int		ft_mod(int i, int j);
void	ft_putstr(char *str);
void	ft_putchar(char c);
typedef	int(*t_fptr)(int, int);

#endif
