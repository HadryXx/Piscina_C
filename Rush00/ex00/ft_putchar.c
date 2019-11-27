/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorta-n <cdorta-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:31:48 by cdorta-n          #+#    #+#             */
/*   Updated: 2019/09/07 15:21:38 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int x)
{
	int longitud;

	longitud = 0;
	write(1, &a, 1);
	if (x > 1)
	{
		while (longitud < (x - 2))
		{
			write(1, &b, 1);
			longitud++;
		}
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
