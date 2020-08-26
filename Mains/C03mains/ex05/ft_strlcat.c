/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sameye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:14:44 by sameye            #+#    #+#             */
/*   Updated: 2020/08/13 13:09:05 by sameye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		j++;
	}
	k = i;
	while ((k + 2 <= (size)) && src[k - i] != '\0')
	{
		dest[k] = src[k - i];
		k++;
	}
	if (size >= 1)
		dest[k] = '\0';
	if (size < i)
		return (size + j);
	return (i + j);
}
