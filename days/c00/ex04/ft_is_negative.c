/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:19:27 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/05 17:46:58 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	int i;

	if (n < 0)
	{
		i = 'N';
		ft_putchar(i);
	}
	else
	{
		i = 'P';
		ft_putchar(i);
	}
}
