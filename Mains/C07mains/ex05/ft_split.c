/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 11:21:49 by sameye            #+#    #+#             */
/*   Updated: 2020/08/20 13:36:44 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset2(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}


int		word_len(char *str, char *charset, int pos)
{
	int		i;

	i = 0;
	while (str[pos])
	{
		if (!is_in_charset(str[pos], charset))
			i++;
		pos++;
	}
	return (i);
}

int		words_count(char *str, char *charset)
{
	int		count;
	int		is_word;
	int 	i;

	i = 0;
	count = 0;
	is_word = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], charset))
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

void	split(char **res, char *str, char *charset)
{
	int		pos;
	int		word;
	int		w_pos;

	pos = 0;
	word = 0;
	w_pos = 0;
	while (str[pos])
	{
		if (!is_in_charset(str[pos], charset))
		{
			if (w_pos == 0)
				if (!(res[word] = malloc(sizeof(char) *
				(word_len(str, charset, pos) + 1))))
					return ;
			res[word][w_pos] = str[pos];
			res[word][w_pos + 1] = '\0';
			w_pos++;
		}
		if ((is_in_charset(str[pos], charset)
			&& !is_in_charset(str[pos + 1], charset) && w_pos > 0)
			&& (w_pos = 0) == 0)
			word++;
		pos++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;

	if (!(res = malloc(sizeof(char*) * (words_count(str, charset) + 1))))
		return (NULL);
	split(res, str, charset);
	res[words_count(str, charset)] = NULL;
	return (res);
}
