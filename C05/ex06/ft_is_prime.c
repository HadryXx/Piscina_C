/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:07:19 by aballest          #+#    #+#             */
/*   Updated: 2019/09/26 19:28:30 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
