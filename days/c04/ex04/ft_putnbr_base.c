/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 10:41:40 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/12 09:22:05 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		error(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int size;
	int f[100];

	i = 0;
	size = 0;
	if (error(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size])
			size++;
		while (nbr)
		{
			f[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[f[i]]);
	}
}
