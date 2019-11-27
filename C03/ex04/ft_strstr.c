/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:47:23 by aballest          #+#    #+#             */
/*   Updated: 2019/09/18 20:31:09 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	while (to_find[a])
		a++;
	if (a == 0)
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (str + a);
			b++;
		}
		a++;
	}
	return (0);
}
