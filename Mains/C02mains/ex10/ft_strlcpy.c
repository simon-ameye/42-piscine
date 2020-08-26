/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:52:52 by sameye            #+#    #+#             */
/*   Updated: 2020/08/09 14:27:06 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		if ((i < size - 1) && (size > 0))
		{
			dest[i] = src[i];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (j);
}
