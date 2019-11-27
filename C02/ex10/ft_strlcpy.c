/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:27:00 by aballest          #+#    #+#             */
/*   Updated: 2019/09/13 11:59:05 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned size)
{
	unsigned int a;
	unsigned int b;

	b = 0;
	while (src[b] != '\0')
		b++;
	if (size == 0)
		return (b);
	a = 0;
	while (a < (size - 1))
	{
		if (src[a] != '\0')
		{
			dest[a] = src[a];
			src[a]++;
		}
		else
		{
			dest[a] = '\0';
			return (b);
		}
		a++;
	}
	dest[a] = '\0';
	return (a);
}
