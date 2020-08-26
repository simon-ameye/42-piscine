/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 17:46:39 by sameye            #+#    #+#             */
/*   Updated: 2020/08/19 13:16:51 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int		char_is_included(char *str, char *charset, int pos)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (str[i + pos] != charset[i])
			return (0);
		i++;
	}
	return (1);
}

int		word_len(char *str, char *charset, int pos)
{
	int len;

	len = 0;
	while (!char_is_included(str, charset, pos + len) && str[pos + len])
	{
		len++;
	}
	return (len);
}

int		write_split(char *str, char *charset, char **res)
{
	int pos;
	int nb_words;
	int writer;
	int len;

	pos = 0;
	nb_words = 0;
	while (pos <= ft_strlen(str) - 1)
	{
		if (!char_is_included(str, charset, pos) && str[pos])
		{
			len = word_len(str, charset, pos);
			if (!(res[nb_words] = malloc(sizeof(**res) * (len + 1))))
				return (0);
			writer = -1;
			while (++writer <= len - 1)
				res[nb_words][writer] = str[pos + writer];
			res[nb_words][writer] = '\0';
			pos = pos + len;
			nb_words++;
		}
		else
			pos = pos + ft_strlen(charset);
	}
	return (nb_words);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	char	**res;

	nb_words = 0;
	if (!(res = malloc(sizeof(*res) * ft_strlen(charset) / 2)))
		return (0);
	if (ft_strlen(charset) >= 0 && ft_strlen(str) >= 0)
		nb_words = write_split(str, charset, res);
	if (!(res[nb_words] = malloc(sizeof(**res) * 1)))
		return (0);
	res[nb_words] = 0;
	return (res);
}
