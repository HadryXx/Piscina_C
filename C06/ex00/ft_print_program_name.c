/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:48:43 by aballest          #+#    #+#             */
/*   Updated: 2019/09/25 11:22:21 by aballest         ###   ########.fr       */
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

	(void)argc;
	(void)argv;
	x = 0;
	while (argv[0][x] != '\0')
	{
		ft_putchar(argv[0][x]);
		x++;
	}
	ft_putchar('\n');
	return (0);
}
