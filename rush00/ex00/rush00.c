/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 11:10:34 by namos             #+#    #+#             */
/*   Updated: 2019/08/03 16:57:39 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	aff_top(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i < x)
			ft_putchar('-');
		else
			ft_putchar('o');
		i++;
	}
}

void	aff_milieu(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('|');
		else if (i < x)
			ft_putchar(' ');
		else
			ft_putchar('|');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			aff_top(x);
		else if (i < y)
			aff_milieu(x);
		else
			aff_top(x);
		if (x > 0)
			ft_putchar('\n');
		i++;
	}
}
