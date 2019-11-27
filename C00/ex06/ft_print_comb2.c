/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:22:23 by aballest          #+#    #+#             */
/*   Updated: 2019/09/07 17:36:37 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int			cont_a;
	int			cont_b;
	char		c;

	cont_a = 0;
	while (cont_a <= 98)
	{
		cont_b = cont_a + 1;
		while (cont_b <= 99)
		{
			c = 48 + cont_a / 10;
			write(1, &c, 1);
			c = 48 + cont_a % 10;
			write(1, &c, 1);
			write(1, " ", 1);
			c = 48 + cont_b / 10;
			write(1, &c, 1);
			c = 48 + cont_b % 10;
			write(1, &c, 1);
			if (cont_a != 98 || cont_b != 99)
				write(1, ", ", 2);
			cont_b++;
		}
		cont_a++;
	}
}
