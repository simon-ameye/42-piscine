/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:17:24 by sameye            #+#    #+#             */
/*   Updated: 2020/08/09 21:07:23 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_alphanum(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_test_alphanum(str[i]))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] + 'A' - 'a';
			i++;
			while (ft_test_alphanum(str[i]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 'a' - 'A';
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
