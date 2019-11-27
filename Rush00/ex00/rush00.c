/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:41:05 by aballest          #+#    #+#             */
/*   Updated: 2019/09/07 16:27:48 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int x);

void	rush(int x, int y)
{
	int nivel;

	nivel = 0;
	ft_putchar('o', '-', 'o', x);
	if (y > 1)
	{
		while (nivel < (y - 2))
		{
			ft_putchar('|', ' ', '|', x);
			nivel++;
		}
	}
	if (nivel == (y - 2))
		ft_putchar('o', '-', 'o', x);
}
