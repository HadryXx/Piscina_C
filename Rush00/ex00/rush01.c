/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorta-n <cdorta-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:08:57 by cdorta-n          #+#    #+#             */
/*   Updated: 2019/09/07 15:25:20 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int x);

void	rush(int x, int y)
{
	int nivel;

	nivel = 0;
	ft_putchar('/', '*', '\\', x);
	if (y > 1)
	{
		while (nivel < (y - 2))
		{
			ft_putchar('*', ' ', '*', x);
			nivel++;
		}
	}
	if (nivel == (y - 2))
		ft_putchar('\\', '*', '/', x);
}
