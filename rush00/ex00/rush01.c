/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefroiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:39:53 by tefroiss          #+#    #+#             */
/*   Updated: 2019/08/03 17:30:08 by tefroiss         ###   ########.fr       */
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
			ft_putchar('/');
		else if (i < x && x > 2)
			ft_putchar('*');
		else
			ft_putchar('\\');
	}
}

void	ft_mid_line(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('*');
		else if (i < x)
			ft_putchar(' ');
		else
			ft_putchar('*');
	}
}

void	ft_bot_line(int x)
{
	int i;

	i = 0;
	while (++i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i < x && x > 2)
			ft_putchar('*');
		else
			ft_putchar('/');
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
