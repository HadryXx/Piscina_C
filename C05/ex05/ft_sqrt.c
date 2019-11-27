/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:37:11 by aballest          #+#    #+#             */
/*   Updated: 2019/09/26 19:27:54 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0 || nb > 2147395600)
		return (0);
	while (res < nb)
	{
		res = i * i;
		i++;
	}
	i--;
	if (res == nb)
		return (i);
	else
		return (0);
}
