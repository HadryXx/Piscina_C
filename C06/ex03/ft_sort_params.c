/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:48:43 by aballest          #+#    #+#             */
/*   Updated: 2019/09/24 20:15:31 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	if (s1[a] == s2[a])
		return (0);
	else
		return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	(void)argc;
	(void)argv;
	x = 0;
	y = 1;
	while (y < argc - 1)
	{
		if (ft_strcmp(argv[y], argv[y + 1]) > 0)
		{
			ft_swap(&argv[y], &argv[y + 1]);
			y = 1;
		}
		else
			y++;
	}
	y = 1;
	while (y < argc)
	{
		ft_putstr(argv[y]);
		ft_putchar('\n');
		y++;
	}
	return (0);
}
