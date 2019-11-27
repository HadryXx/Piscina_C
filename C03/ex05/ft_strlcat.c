/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:11:04 by aballest          #+#    #+#             */
/*   Updated: 2019/09/18 20:29:33 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int count;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		if (a < size - 1)
			dest[a] = src[b];
		a++;
		b++;
	}
	dest[a - 1] = '\0';
	count = 0;
	while (src[count] != '\0')
		count++;
	return (count + size);
}
