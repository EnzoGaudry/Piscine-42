/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 00:13:51 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/22 10:18:33 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*here;
	int		i;

	i = 0;
	while (src[i])
		i++;
	here = (char)malloc(sizeof(char) i + 1);
	if (here == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		here[i] = src[i];
		i++;
	}
	here[i] = '\0';
	return (here);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *tab;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
