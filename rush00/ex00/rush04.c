/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namos <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:35:44 by namos             #+#    #+#             */
/*   Updated: 2019/08/03 16:41:50 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top(int x)
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

void	middle(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('B');
		else if (i < x)
			ft_putchar(' ');
		else
			ft_putchar('B');
		i++;
	}
}

void	bottom(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i < x)
			ft_putchar('B');
		else
			ft_putchar('A');
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
			top(x);
		else if (i < y)
			middle(x);
		else
			bottom(x);
		ft_putchar('\n');
		i++;
	}
}
