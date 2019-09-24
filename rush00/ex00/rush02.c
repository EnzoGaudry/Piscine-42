/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefroiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:39:53 by tefroiss          #+#    #+#             */
/*   Updated: 2019/08/03 17:21:07 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top_line(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i < x && x > 2)
			ft_putchar('B');
		else
			ft_putchar('A');
	}
}

void	ft_mid_line(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('B');
		else if (i < x)
			ft_putchar(' ');
		else
			ft_putchar('B');
	}
}

void	ft_bot_line(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i < x && x > 2)
			ft_putchar('B');
		else
			ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	while (++i <= y)
	{
		if (i == 1)
			ft_top_line(x);
		else if (i < y)
			ft_mid_line(x);
		else
			ft_bot_line(x);
		if (x > 0 && y > 0)
			ft_putchar('\n');
	}
}
