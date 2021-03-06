/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:08:44 by aballest          #+#    #+#             */
/*   Updated: 2019/09/12 12:03:30 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
			return (0);
		a++;
	}
	return (1);
}
