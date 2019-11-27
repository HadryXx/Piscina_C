/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:00:40 by aballest          #+#    #+#             */
/*   Updated: 2019/09/09 13:57:46 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	while (a == 0 || a < (size - 1))
	{
		b = 0;
		while (b == 0 || b < (size - a - 1))
		{
			if (tab[b] > tab[b + 1])
				swap(&tab[b], &tab[b + 1]);
			b++;
		}
		a++;
	}
}
