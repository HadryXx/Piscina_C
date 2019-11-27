/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:35:33 by aballest          #+#    #+#             */
/*   Updated: 2019/09/19 15:04:37 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int factorial;

	factorial = 1;
	a = 1;
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		factorial = factorial * a;
		a++;
	}
	return (factorial);
}
