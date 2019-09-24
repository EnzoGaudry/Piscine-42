/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:14:34 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/19 18:43:39 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int*)malloc((max - min) * sizeof(int))))
		return (0);
	i = 0;
	if (tab == NULL)
		return (0);
	while (min <= max - 1)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
