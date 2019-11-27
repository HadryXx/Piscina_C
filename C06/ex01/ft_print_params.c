/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:48:43 by aballest          #+#    #+#             */
/*   Updated: 2019/09/24 18:59:03 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	(void)argc;
	(void)argv;
	x = 0;
	y = 1;
	while (y < argc)
	{
		while (argv[y][x] != '\0')
		{
			ft_putchar(argv[y][x]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
	return (0);
}
