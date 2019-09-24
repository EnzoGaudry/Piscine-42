/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 07:31:37 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/13 19:07:57 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 2;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
