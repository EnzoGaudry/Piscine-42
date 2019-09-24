/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 08:19:12 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/13 14:26:14 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nbr)
{
	long i;

	i = 3;
	if (nbr <= 1)
		return (0);
	if (nbr == 2 || nbr == 3)
		return (1);
	if (nbr % 2 == 0 || nbr % 3 == 0)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (nb < 0)
			nb = 2;
		if (ft_prime(nb))
			return (nb);
		nb++;
	}
}
