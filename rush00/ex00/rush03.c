/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:41:58 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/03 16:54:09 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_top(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i < x)
			ft_putchar('B');
		else
			ft_putchar('C');
		i++;
	}
}

void	print_middle(int x)
{
	int j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('B');
		else if (j < x)
			ft_putchar(' ');
		else
			ft_putchar('B');
		j++;
	}
}

void	rush(int x, int y)
{
	int k;

	k = 1;
	while (k <= y)
	{
		if (k == 1)
			print_top(x);
		else if (k < y)
			print_middle(x);
		else
			print_top(x);
		if (x > 0)
			ft_putchar('\n');
		k++;
	}
}
